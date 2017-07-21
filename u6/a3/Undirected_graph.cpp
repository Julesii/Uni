#include "Undirected_graph.hpp"

Undirected_graph::Undirected_graph(int number_of_nodes)
{
    adjacency_lists.resize(number_of_nodes);
}

void Undirected_graph::add_edge(int node_1, int node_2)
{
    adjacency_lists[node_1].insert(node_2);
    adjacency_lists[node_2].insert(node_1);
}