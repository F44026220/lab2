lab2: Elo.o main.o
	g++ -o lab2 main.o Elo.o

Elo.o: Elo.cpp Elo.h
	g++ -c Elo.cpp

main.o: main.cpp Elo.h
	g++ -c main.cpp

clean:
	rm lab2 *.o 
