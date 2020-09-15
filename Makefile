all:
	g++ -Wall -pedantic q1.cpp -o programq1
	g++ -Wall -pedantic q2.cpp -o programq2
	g++ -Wall -pedantic q3.cpp -o programq3
	g++ -Wall -pedantic q4.cpp q4_funcoes.cpp -o programq4
	

clean:
	rm -rf *.o

q1:
	./programq1

q2ex1:
	./programq2 8 3 1

q2ex2:
	./programq2 7 8 9

q3ex1:
	./programq2 8 3 1

q3ex2:
	./programq3 7 8 9

q4ex1:
	./programq4 10 9 11 12 8

q4ex2:
	./programq4 15 12 16 10 11





