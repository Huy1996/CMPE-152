1/ To compile and create executable file:
    -> make

2/ To run test:
    -> make test

    Note: This make command will print both scan and parse to the terminal
    ScanOut.txt contain scan result
    ParseOut.txt contain parse result

3/ To clear all the compiled and executable file:
    -> make clean

To run a custom test:
    -> ./main.exe <option> "filename.ext"

    <option> :  -scan       Scan all token and store result in "ScanOut.txt"
                -parse      Parse program and store tree in "ParseOut.txt"

Note: Step 1 must always be run first


