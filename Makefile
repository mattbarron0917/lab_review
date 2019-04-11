main: main.o funcs.o
	g++ -o main main.o funcs.o

test: test.o funcs.o
	g++ -o test test.o funcs.o

test.o: test.cpp funcs.h

main.o: main.cpp funcs.h

funcs.o: funcs.cpp funcs.h

clean:
	rm funcs.o main.o

run: main
	./main<bad-code.cpp

runtests: test
	./test
