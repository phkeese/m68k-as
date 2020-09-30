/*
	Supply types used by assembler like AnsiString so that code can be compiled
	on non-borland compilers.
*/

#pragma once

#include <string>

using AnsiString = std::string;
using String = std::string;
using TColor = int;
