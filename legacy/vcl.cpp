/*
	Provide implementation for vcl.h
	NOT meant to implement the entirety of VCL from Borland
*/

#include <vcl.h>
#include <iostream>
#include <cstring>
#include <iomanip>
#include <sstream>


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
	while (*a && (toupper(*a) == toupper(*b))) {
		a++;
		b++;
	}
	return *(const unsigned char*)a - *(const unsigned char*)b;
}


// Compare two string up to n characters, ignore capitalization
int strnicmp(const char *a, const char *b, int n) {
	while (n--) {
		if (toupper(*a++) != toupper(*b++)) {
			return (unsigned char)toupper(*a) - (unsigned char)toupper(*b);
		}
	}
	return 0;
}



// Convert AnsiString to Integer
int StrToInt(const AnsiString S) {
	return atoi(S.c_str());
}


// AnsiString conversions
AnsiString UpperCase(AnsiString s) {
	AnsiString new_string = s;
	for (int i = 0; i < new_string.length(); i++) {
		new_string[i] = toupper(new_string[i]);
	}
	return new_string;
}

AnsiString IntToHex(int s, int digits) {
	std::stringstream ss;
	ss << std::hex << std::setfill('0') << std::setw(digits);
	ss << s;
	return ss.str();
}