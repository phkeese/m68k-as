/*
	Supply types used by assembler like AnsiString so that code can be compiled
	on non-borland compilers.
*/

#pragma once

#include <string>

using AnsiString = std::string;
using String = std::string;
using TColor = int;


// Error reporting shim
void report_error(String message, String title, int status);


// Don't want to rewrite every Application->MessageBox
struct Application_Struct {
	void (*MessageBox)(String, String, int);
};

extern struct Application_Struct *Application;