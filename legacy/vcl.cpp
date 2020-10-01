/*
	Provide implementation for vcl.h
	NOT meant to implement the entirety of VCL from Borland
*/

#include <vcl.h>
#include <iostream>
#include <cstring>

void report_error(String message, String title, int status) {
	std::cerr << title << ":" << status << ":" << message << std::endl;
}


// Provide basic functionality of Application from Borland
Application_Struct app = {
	.MessageBox = &report_error
};


Application_Struct *Application;


// Compare strings, ignore capitalization
int stricmp(const char *a, const char *b) {
	while (*a) {
		char a_upper = toupper(*a++);
		char b_upper = toupper(*b++);
		if (a_upper != b_upper) {
			break;
		}
	}

	return *(const unsigned char*)a - *(const unsigned char*)b;
}