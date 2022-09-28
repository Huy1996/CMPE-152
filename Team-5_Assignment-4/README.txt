1/ Generate Scanner and Parser using antlr
	-> make antlr

2/ Compile source code
	-> make compile

3/ Run scanner test
	-> make scan
	Note: This command will cat the output file to terminal, the result also stored in ScanOut.txt

4/ To run custom test
	-> ./main.o -scan <filename.txt>	# Scanner result store in ScanOut.txt

