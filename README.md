# m68k-as - Extracting the assembler from Edit68K and making it compile with clang

The Easy68K toolchain is amazing, but it does not run natively on linux and mac.
The first step to change that is to extract the core functionality from the old
codebase and making it compile with other compilers, in this case clang++.

The goal of this project is to decouple the actual assembler from the UI code
generated in Borland and provide a CLI tool to assemble Motorola 68K code to 
S-Record files, like Edit68K does. 

## Overview of what needs to be done:

- [ ] Provide substitute classes and functions to compile assembler
- [ ] Remove unused code (mostly UI)
- [ ] Remove all references to UI code
- [ ] Rewrite to C++11 and decouple assembler from files



At the end, we should hopefully end up with a library and a frontend for it to assemble code.

---

This project is based on the [Easy68K project](https://github.com/ProfKelly/EASy68K).

