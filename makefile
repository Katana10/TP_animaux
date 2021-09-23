animaux.exe : main.o animaux.o monde.o
	g++ -std=c++11 main.o animaux.o monde.o -o animaux.exe

main.o : main.cpp animaux.h monde.h
	g++ -std=c++11 -g -c main.cpp

animaux.o : animaux.cpp animaux.h 
	g++ -std=c++11 -g -c animaux.cpp

monde.o : monde.cpp monde.h
	g++ -std=c++11 -g -c monde.cpp

clean :
	rm *.o animaux
