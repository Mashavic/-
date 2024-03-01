FLAGS:=-std=c11 -Wall -Werror -Wextra

FILE_MAIN:=main
FILE_BASIC:=game

O_FILE:=game

LNCURSES:=-lncurses

all: clean clang
	gcc $(FILE_MAIN).c $(FILE_BASIC).c -o $(O_FILE).exe $(LNCURSES)

run: clean clang
	gcc $(FILE_MAIN).c $(FILE_BASIC).c -o $(O_FILE).exe $(LNCURSES)
	./$(O_FILE).exe

clean:
	rm -rf *.exe *.out

clang:
	clang-format -style=Google -i *.c *.h

install_Linux:
	sudo apt install clang-format
	sudo apt-get install libncurses5-dev
