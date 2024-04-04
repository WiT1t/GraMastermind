all: main

main: main.o graj.o wygeneruj.o usunb.o usunc.o
	clang -o main main.o graj.o wygeneruj.o usunb.o usunc.o
main.o: main.c
	clang -c main.c
graj.o: graj.c
	clang -c graj.c
wygeneruj.o: wygeneruj.c
	clang -c wygeneruj.c
usunb.o: usunb.c
	clang -c usunb.c
usunc.o: usunc.c
	clang -c usunc.c
clean:
	rm -f main *.o *~
