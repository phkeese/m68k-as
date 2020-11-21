#include <sub_stdlib.h>
#include <sstream>
#include <iomanip>


// Non-standard, converts value to a string in str with base
// Returns beginning of string (str)
char *itoa(int value, char * str, int base) {
	// Why write code when you can use std?
	std::stringstream ss;
	ss << std::setbase(base);
	ss << value;
	const char *cstr = ss.str().c_str();
	strcpy(str, cstr);
	return str;
}