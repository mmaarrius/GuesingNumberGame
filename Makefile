CFLAGS= -Wall -Werror

.PHONY : clean build

build: main
	./main

main: main.c helper.c
	gcc main.c helper.c $(CFLAGS) -o main

clean:
	rm -f main