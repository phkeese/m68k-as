#include <iostream>
#include <vcl.h>

int assembleFile(const char fileName[], const char tempName[], const AnsiString workName);

int main(int argc, char **argv) {
	std::cout << "Hell awaits in legacy!\n";
	AnsiString sourcename = argv[1];
	AnsiString tempname = argv[2];
	AnsiString workname = argv[3];
	
	std::cout << "Source: " << sourcename << ", Temp: " << tempname << ", Work: " << workname << "\n";
	assembleFile(sourcename.c_str(), tempname.c_str(), workname);
}