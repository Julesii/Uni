#ifndef __DFS_OR_BSF_HPP__
#define __DFS_OR_BSF_HPP__

#include "Undirected_graph.hpp"
#include <vector>
#include <set>
#include <deque>


void add_neighbors(Undirected_graph g, std::deque<int> &to_visit, int fresh_node, bool dfs);

std::vector<int> dfs_or_bfs(Undirected_graph g, int start_node, bool dfs);

#endif

