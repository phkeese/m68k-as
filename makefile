CC = c++
CFLAGS = -std=c++98
WARN = -Wall
INCLUDE = -Ilegacy/include
COMPILE = $(CC) $(CFLAGS) $(WARN) $(INCLUDE)


build/ASSEMBLE.O: legacy/ASSEMBLE.CPP
	$(COMPILE) -o $@ $^ -c


build/vcl.o: legacy/vcl.cpp
	$(COMPILE) -o $@ $^ -c


build/m68-as: main.cpp build/ASSEMBLE.O build/vcl.o
	$(COMPILE) -o $@ $^


run: build/m68-as
	build/m68-as