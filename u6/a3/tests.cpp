#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include "dfs_or_bfs.hpp"
#include "Undirected_graph.hpp"

#include <iostream>
using namespace std;

TEST_CASE("Create the Undirected graph")
{
	Undirected_graph g(2);
	g.add_edge(0, 1);

	std::set<int> expected = {1};
	REQUIRE(g.adjacency_lists[0] == expected);
}


TEST_CASE("Perform a depth first search")
{
	Undirected_graph g(2);
	g.add_edge(0, 1);

	std::vector<int> ret = dfs_or_bfs(g, 0, true);
}


TEST_CASE("Perform a breadth first search")
{
	Undirected_graph g(2);
	g.add_edge(0, 1);

	std::vector<int> ret = dfs_or_bfs(g, 0, false);
}
