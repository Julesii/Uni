all: Undirected_graph.o dfs_or_bfs.o

Undirected_graph.o: Undirected_graph.cpp Undirected_graph.hpp
	g++ -std=c++11 -c Undirected_graph.cpp

dfs_or_bfs.o: Undirected_graph.o dfs_or_bfs.cpp dfs_or_bfs.hpp
	g++ -std=c++11 -c dfs_or_bfs.cpp

tests: tests.exe
	./tests.exe

tests.exe: Undirected_graph.o dfs_or_bfs.o tests.o
	g++ -std=c++11 -o tests.exe tests.o Undirected_graph.o dfs_or_bfs.o

tests.o: tests.cpp
	g++ -std=c++11 -c tests.cpp

clean:
	rm -f Undirected_graph.o
	rm -f dfs_or_bfs.o
	rm -f tests.o
	rm -f tests.exe

