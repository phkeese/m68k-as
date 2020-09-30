CC = c++
CFLAGS = -std=c++11
WARN = -Wall -Wextra
INCLUDE = -Ilegacy/include
COMPILE = $(CC) $(CFLAGS) $(WARN) $(INCLUDE)


build/ASSEMBLE.O: legacy/ASSEMBLE.CPP
	$(COMPILE) -o $@ $^ -c


build/m68-as: main.cpp build/ASSEMBLE.O
	$(COMPILE) -o $@ $^


run: build/m68-as
	build/m68-as