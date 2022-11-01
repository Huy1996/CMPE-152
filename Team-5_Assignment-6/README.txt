1/ Generate Scanner and Parser using antlr
	-> make antlr

2/ Compile source code
	-> make compile

3/ Run scanner test
	-> make scan
	Note: This command will cat the output file to terminal, the result also stored in ScanOut.txt

4/ Run parser test
	-> make parse
	Note: This command will cat the output file to terminal, the result also stored in ParseOut.txt


5/ To run custom test
	Scanner:
		-> make scan FILE=<filename.txt>    # this command will print result to terminal
		OR
		-> ./main.o -scan <filename.txt>	# Scanner result store in ScanOut.txt

	Parser:
		-> make parse FILE=<filename.txt>	# this command will print result to terminal
		OR
		-> ./main.o -parse <filename.txt>	# Scanner result store in ScanOut.txt



