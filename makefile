CC = c++
STD = -std=c++98
WARN = -Wall
INCLUDE = -Ilegacy/include
CFLAGS = $(WARN) $(INCLUDE) $(STD)
COMPILE = $(CC) $(CFLAGS) -c
LINK = $(CC) $(WARN) 


%.o: %.cpp
	$(COMPILE) -o $@ $^


%.O: %.CPP
	$(COMPILE) -o $@ $^


build/m68-as: main.o legacy/ASSEMBLE.O legacy/vcl.o legacy/INSTLOOK.O legacy/GLOBALS.O legacy/ERROR.O legacy/SYMBOL.O legacy/EVAL.O
	$(LINK) -o $@ $^


run: build/m68-as
	build/m68-as


.PHONY: clean
clean:
	rm *.o
	rm legacy/*.o
	rm build/*