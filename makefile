CC = c++
CFLAGS = -std=c++98
WARN = -Wall
INCLUDE = -Ilegacy/include
COMPILE = $(CC) $(CFLAGS) $(WARN) $(INCLUDE) -c
LINK = $(CC) $(WARN) 


build/ASSEMBLE.O: legacy/ASSEMBLE.CPP
	$(COMPILE) -o $@ $^


build/vcl.o: legacy/vcl.cpp
	$(COMPILE) -o $@ $^


build/INSTLOOK.O: legacy/INSTLOOK.CPP
	$(COMPILE) -o $@ $^


build/GLOBALS.O: legacy/GLOBALS.CPP
	$(COMPILE) -o $@ $^


build/main.o: main.o
	$(COMPILE) -o $@ $^


build/m68-as: build/main.o build/ASSEMBLE.O build/vcl.o build/INSTLOOK.O build/GLOBALS.O
	$(LINK) -o $@ $^


run: build/m68-as
	build/m68-as