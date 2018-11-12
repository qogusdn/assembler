# Write this Makefile
myas: main.o cheak.o trans.o
	gcc -o myas  main.o check.o trans.0 -lm

main.o: main.c
	gcc -c main.c

check.o: cheak.c
	gcc -c check.c

trans.o: trans.c
	gcc -c trans.c

clean:
	rm -f main.o check.o trans.o myas
