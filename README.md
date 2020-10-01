# m68k-as - Extracting the assembler from Edit68K

The Easy68K toolchain is amazing, but it does not run natively on linux and mac.
The first step to change that is to extract the core functionality from the old
codebase and making it compile with other compilers, in this case clang++.

The goal of this project is to decouple the actual assembler from the UI code
generated in Borland and provide a CLI tool to assemble Motorola 68K code to 
S-Record files, like Edit68K does. 

## Overview of what needs to be done:

- [x] Provide substitute classes and functions to compile assembler
- [ ] Reimplement listing file
- [ ] Remove unused code (mostly UI)
- [ ] Remove all references to UI code
- [ ] Rewrite to C++11 and decouple assembler from file streams



At the end, we should hopefully end up with a library and a frontend for it to assemble code.





## Usage

To compile the assembler:

```bash
make build/m68k-as
```

To assemble a program:

```bash
m68k-as <source> <temp file> <workname>
```

This will generate two files, `<work name>.S68` with the assembled code and `<temp file>` in the current directory. 

The temporary can be deleted.

---

This project is based on the [Easy68K project](https://github.com/ProfKelly/EASy68K).

