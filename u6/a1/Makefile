all: Dir_or_File.o

Dir_or_File.o: Dir_or_File.cpp Dir_or_File.hpp
	g++ -std=c++11 -c Dir_or_File.cpp

tests: tests.exe
	./tests.exe

tests.exe: Dir_or_File.o tests.o
	g++ -std=c++11 -o tests.exe tests.o Dir_or_File.o

tests.o: tests.cpp
	g++ -std=c++11 -c tests.cpp

clean:
	rm -f Dir_or_File.o
	rm -f tests.o
	rm -f tests.exe

