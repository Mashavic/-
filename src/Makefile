FLAGS:=-std=c11 -Wall -Werror -Wextra

FILE_MAIN:=main
FILE_BASIC:=game

O_FILE:=game

LNCURSES:=-lncurses

all: clean
	gcc $(FILE_MAIN).c $(FILE_BASIC).c -o $(O_FILE).exe $(LNCURSES)

run:clean
	gcc $(FILE_MAIN).c $(FILE_BASIC).c -o $(O_FILE).exe $(LNCURSES)
	./$(O_FILE).exe

clean:
	rm -rf *.exe *.out

style:
	cp ../materials/linters/.clang-format ../src/.clang-format
	clang-format -style=Google -i *.c *.h
	rm .clang-format

install_Linux:
	sudo apt install clang-format
	sudo apt-get install libncurses5-dev
