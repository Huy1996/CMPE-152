GCC=g++ -std=c++14
FRONT=./frontend
INTER=./intermediate

.PHONY: all
all: Token.o Scanner.o main_scanner.o main_scanner.exe Parser.o main_parser.exe main.exe

test: test-in.txt main.exe
	./main.exe -scan test-in.txt
	cat ScanOut.txt
	./main.exe -parse test-in.txt
	cat ParseOut.txt

test_parser: test-in.txt main_parser.exe
	./main_parser.exe test-in.txt > test-out.txt

test_scanner: test-in.txt main_scanner.exe
	./main_scanner.exe test-in.txt > test-scanner.txt

main_scanner.exe: Scanner.o Token.o main_scanner.o
	$(GCC) Scanner.o Token.o main_scanner.o -o $@

main_parser.exe: Scanner.o Token.o main_parser.o Parser.o
	$(GCC) Scanner.o Token.o main_parser.o Parser.o -o $@

main.exe: Scanner.o Token.o main.o Parser.o
	$(GCC) Scanner.o Token.o main.o Parser.o -o $@

main_parser.o: main_parser.cpp
	$(GCC) -c main_parser.cpp

main_scanner.o: main_scanner.cpp
	$(GCC) -c main_scanner.cpp

main.o: main.cpp
	$(GCC) -c main.cpp

Parser.o: Scanner.o $(FRONT)/Parser.cpp $(FRONT)/Parser.h $(INTER)/Node.h $(INTER)/Symtab.h
	$(GCC) -c $(FRONT)/Parser.cpp

Scanner.o: $(FRONT)/Scanner.cpp $(FRONT)/Scanner.h $(FRONT)/Source.h
	$(GCC) -c $(FRONT)/Scanner.cpp

Token.o: $(FRONT)/Token.cpp $(FRONT)/Token.h $(INTER)/helper.h
	$(GCC) -c $(FRONT)/Token.cpp

clean:
	rm *.exe *.o