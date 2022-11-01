ANTLRFILE = Expr.g4

antlr4 = java -jar ${ANTLR_JAR}

PROJECT_PATH = $(shell pwd)


INTER_DIR = $(PROJECT_PART)/intermediate

ANTLR_RUNTIME_INCLUDES = /usr/local/include/antlr4-runtime
ANTLR_INCLUDES = $(PROJECT_PART)/target/generated-sources/ant4
FRONT_END_INCLUDES = $(PROJECT_PART)/frontend
SYMTAB_INCLUDES = $(INTER_DIR)/symtab
TYPE_INCLUDES = $(INTER_DIR)/type
UTIL_INCLUDES = $(INTER_DIR)/util

LIB_PATH = /usr/local/lib
#LIB_PATH = /usr/local/Cellar/antlr4-cpp-runtime/4.11.1/lib
LIB = antlr4-runtime
PROG = Exprmain.cpp
OUT = main.o

ANTLR_SOURCES = target/generated-sources/ant4/*.cpp
FRONT_END_SOURCES = frontend/*.cpp
SYMTAB_SOURCES = intermediate/symtab/*.cpp
TYPE_SOURCES = intermediate/type/*.cpp
UTIL_SOURCES = intermediate/util/*.cpp

SOURCES = $(ANTLR_SOURCES) $(FRONT_END_SOURCES) $(SYMTAB_SOURCES) $(TYPE_SOURCES) $(UTIL_SOURCES) $(PROG)
FILE = input.txt

scan:
	./$(OUT) -scan $(FILE)
	cat ScanOut.txt

parse:
	./$(OUT) -parse $(FILE)
	cat ParseOut.txt

semantic:
	./$(OUT) -semantic $(FILE)
	cat SemanticOut.txt

compile:
	g++ -std=c++14 -o $(OUT) -I$(ANTLR_RUNTIME_INCLUDES) -I$(ANTLR_INCLUDES) -I$(FRONT_END_INCLUDES) -I$(SYMTAB_INCLUDES) -I$(TYPE_INCLUDES) -I$(UTIL_INCLUDES) -I$(PROJECT_PATH) -L$(LIB_PATH) -w $(SOURCES) -l$(LIB)

antlr:
	$(antlr4) -o ./target/generated-sources/ant4 -no-listener -visitor -encoding UTF-8 -Dlanguage=Cpp $(ANTLRFILE)

clean:
	rm -rf target .antlr .vscode
	rm *.o ParseOut.txt ScanOut.txt

clean-output:
	rm ParseOut.txt ScanOut.txt