FLAGS:=-std=c11 -Wall -Werror -Wextra

FILE_MAIN:=main
FILE_BASIC:=game

O_FILE:=game

all: clean
	gcc $(FLAGS) $(FILE_MAIN).c $(FILE_BASIC).c -o $(O_FILE)
	.\$(O_FILE)

clean:
	rm -rf *.exe *.out

style:
	cp ../materials/linters/.clang-format ../src/.clang-format
	clang-format -style=Google -n *.c *.h
	clang-format -style=Google -i *.c *.h
	rm .clang-format