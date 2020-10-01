#include <iostream>
#include <vcl.h>

int assembleFile(const char fileName[], const char tempName[], const AnsiString workName);

extern bool objFlag;

int main(int argc, char **argv) {
	std::cout << "Hell awaits in legacy!\n";
	AnsiString sourcename = argv[1];
	AnsiString tempname = argv[2];
	AnsiString workname = argv[3];
	
	objFlag = true;
	std::cout << "Source: " << sourcename << ", Temp: " << tempname << ", Work: " << workname << "\n";
	assembleFile(sourcename.c_str(), tempname.c_str(), workname);
}