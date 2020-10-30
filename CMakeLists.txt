cmake_minimum_required(VERSION 3.17)
project(m68k-as)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(m68k-as main.cpp legacy/ASSEMBLE.CPP legacy/vcl.CPP legacy/INSTLOOK.CPP legacy/GLOBALS.CPP legacy/ERROR.CPP legacy/SYMBOL.CPP legacy/EVAL.CPP legacy/OPPARSE.CPP legacy/MACRO.CPP legacy/sub_stdlib.CPP legacy/BUILD.CPP legacy/CODEGEN.CPP legacy/OBJECT.CPP legacy/STRUCTURED.CPP legacy/INSTTABL.CPP legacy/DIRECTIV.CPP legacy/MOVEM.CPP legacy/LISTING.CPP)

include_directories(legacy/include)