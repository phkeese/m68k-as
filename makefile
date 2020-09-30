CC = c++
CFLAGS = -std=c++11
WARN = -Wall -Wextra
COMPILE = $(CC) $(CFLAGS) $(WARN)

build/m68-as: main.cpp
	$(COMPILE) -o $@ $^


run: build/m68-as
	build/m68-as