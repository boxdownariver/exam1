run-test: menuDriver.cpp persontype.o pAlgs.o 
	g++ --std=c++20 -o "run-test" menuDriver.cpp persontype.o pAlgs.o
studenttype.o: studenttype.cpp studenttype.h
	g++ --std=c++20 -c studenttype.cpp
persontype.o: persontype.cpp persontype.h
	g++ --std=c++20 -c persontype.cpp
professortype.o: professortype.cpp professortype.h
	g++ --std=c++20 -c professortype.cpp
sort.o: sort.cpp sort.h
	g++ --std=c++20 -c sort.cpp
pAlgs.o: pAlgs.cpp pAlgs.h
	g++ --std=c++20 -c pAlgs.cpp
clean:
	rm *.o run-test
