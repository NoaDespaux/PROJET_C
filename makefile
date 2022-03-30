all: main
	./main

main: main.c chiffrement.o
	gcc chiffrement.o main.c -o main

clean: main
	rm main *.o

chiffre: chiffrement.c chiffrement.h
	gcc -c chiffrement.c