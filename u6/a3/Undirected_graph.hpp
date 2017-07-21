#ifndef __UNDIRECTED_GRAPH_HPP__
#define __UNDIRECTED_GRAPH_HPP__

#include <vector>
#include <set>

class Undirected_graph
{
	public:
		std::vector<std::set<int>> adjacency_lists;

		Undirected_graph(int number_of_nodes);
		void add_edge(int node_1, int node_2);
};

#endif

