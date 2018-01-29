# Top-level directory containing ableC repository and extensions folder
ABLEC_BASE?=../../../ableC
EXTS_BASE?=../../../extensions

# All directories containing grammars that may be included
GRAMMAR_DIRS=$(ABLEC_BASE) $(EXTS_BASE)/ableC-checkTaggedUnion/grammars

# All silver files in included grammars, to be included as dependancies
GRAMMAR_SOURCES=$(shell find $(GRAMMAR_DIRS) -name *.sv -print0 | xargs -0)


all: ableC.jar examples

ableC.jar: $(GRAMMAR_SOURCES)
	touch artifact/Artifact.sv
	silver -o $@ -I $(ABLEC_BASE) \
		     -I $(EXTS_BASE)/ableC-check/grammars \
		     -I $(EXTS_BASE)/ableC-checkTaggedUnion/grammars \
		     $(SVFLAGS) artifact

examples: example1.out example2.out

example1.c: ableC.jar example1.xc
	java -Xss6M -jar ableC.jar example1.xc

example1.out: example1.c
	gcc example1.c -o example1.out

example2.c: ableC.jar example2.xc
	java -Xss6M -jar ableC.jar example2.xc

example2.out: example2.c
	gcc example2.c -o example2.out

clean:
	rm -f *~ *.i *.c *.o *.out *.test *.jar *.copperdump.html build.xml

.PHONY: all clean
