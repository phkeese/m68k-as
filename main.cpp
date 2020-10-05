#include <iostream>
#include <vcl.h>

int assembleFile(const char fileName[], const char tempName[], const AnsiString workName);

extern bool listFlag;	        // True if a listing is desired
extern bool objFlag;	        // True if an S-Record object code file is desired
extern bool CEXflag;	        // True is Constants are to be EXpanded
extern bool BITflag;           // True to assemble bitfield instructions
extern bool CREflag;           // true adds symbol table to listing
extern bool MEXflag;           // true expands macro calls in listing
extern bool SEXflag;           // true expands structured code in listing
extern bool WARflag;           // true shows Warnings during assembly

int main(int argc, char **argv) {
	std::cout << "Hell awaits in legacy!\n";
	AnsiString sourcename = argv[1];
	AnsiString tempname = argv[2];
	AnsiString workname = argv[3];
	

	listFlag = true;
	objFlag = true;
	CEXflag = true;
	BITflag = true;
	CREflag = true;
	MEXflag = true;
	SEXflag = true;
	WARflag = true;

	std::cout << "Source: " << sourcename << ", Temp: " << tempname << ", Work: " << workname << "\n";
	assembleFile(sourcename.c_str(), tempname.c_str(), workname);
}