CXXFLAGS += -Wall -Wextra -Werror -std=c++0x -fno-exceptions
CXXFLAGS += -s -shared -fpic
LDFLAGS += -lphpcpp -lncurses
#PREFIX ?=$(shell php-config --prefix)
PHP_EXT_DIR =$(shell php-config --extension-dir)

main: main.cpp

clean:
	rm -f main

install: main
	install main ${PHP_EXT_DIR}/php_ncurses.so

uninstall:
	rm -f ${PHP_EXT_DIR}/php_ncurses.so

.PHONY: clean install uninstall
