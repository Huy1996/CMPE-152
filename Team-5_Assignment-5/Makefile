ANTLRFILE = Expr.g4
#ANTLR_JAR = /Users/huyduong/ANTLR-4.7.2/antlr-4.7.2-complete.jar 

antlr4 = java -jar ${ANTLR_JAR}

PROJECT_PATH = $(shell pwd)
ANTLR_RUNTIME_INCLUDES = /usr/local/include/antlr4-runtime
#ANTLR_RUNTIME_INCLUDES = /usr/local/Cellar/antlr4-cpp-runtime/4.11.1/include/antlr4-runtime
ANTLR_INCLUDES = $(PROJECT_PART)/target/generated-sources/ant4
LIB_PATH = /usr/local/lib
#LIB_PATH = /usr/local/Cellar/antlr4-cpp-runtime/4.11.1/lib
LIB = antlr4-runtime
PROG = Exprmain.cpp
OUT = main.o
ANTLR_SOURCES = target/generated-sources/ant4/*.cpp
SOURCES = $(ANTLR_SOURCES) $(PROG)

compile:
	g++ -o $(OUT) -I$(ANTLR_RUNTIME_INCLUDES) -I$(ANTLR_INCLUDES) -I$(PROJECT_PATH) -L$(LIB_PATH) -w $(SOURCES) -l$(LIB)

antlr:
	$(antlr4) -o ./target/generated-sources/ant4 -no-listener -visitor -encoding UTF-8 -Dlanguage=Cpp $(ANTLRFILE)

clean:
	rm -rf target
	rm *.o