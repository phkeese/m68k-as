// Substitute stdlib for non-standard functions
#pragma once

// Non-standard, converts value to a string in str with base
// Returns beginning of string (str)
char *itoa(int value, char * str, int base);