all: Entry.o Linear_probing_hash_table.o

Entry.o: Entry.cpp Entry.hpp
	g++ -std=c++11 -c Entry.cpp

Linear_probing_hash_table.o: Entry.o Linear_probing_hash_table.cpp Linear_probing_hash_table.hpp
	g++ -std=c++11 -c Linear_probing_hash_table.cpp

tests: tests.exe
	./tests.exe

tests.exe: Entry.o Linear_probing_hash_table.o tests.o
	g++ -std=c++11 -o tests.exe tests.o Entry.o Linear_probing_hash_table.o

tests.o: tests.cpp
	g++ -std=c++11 -c tests.cpp

clean:
	rm -f Entry.o
	rm -f Linear_probing_hash_table.o
	rm -f tests.o
	rm -f tests.exe

