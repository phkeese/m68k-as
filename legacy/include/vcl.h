/*
	Supply types used by assembler like AnsiString so that code can be compiled
	on non-borland compilers.
*/

#pragma once

#include <string>


#define MB_OK 0


typedef std::string AnsiString;
typedef std::string String;
typedef int TColor;


// Error reporting shim
void report_error(String message, String title, int status);


// Don't want to rewrite every Application->MessageBox
struct Application_Struct {
	void (*MessageBox)(String, String, int);
};


extern struct Application_Struct *Application;


// Compare two string, ignore capitalization 
int stricmp(const char *a, const char *b);


// Compare two string up to n characters, ignore capitalization
int strnicmp(const char *a, const char *b, int n);


// Convert AnsiString to Integer
int StrToInt(const AnsiString S);


// AnsiString conversions
AnsiString UpperCase(AnsiString s);
AnsiString IntToHex(int value, int digits);


// Convert char to String
String to_string(char c);