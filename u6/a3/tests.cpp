#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include "dfs_or_bfs.hpp"
#include "Undirected_graph.hpp"

#include <iostream>
using namespace std;

TEST_CASE("Create the Undirected graph")
 {
 Undirected_graph g(7);
  g.add_edge(0, 1);
  g.add_edge(0, 2);
  g.add_edge(2, 3);
  g.add_edge(2, 4);
  g.add_edge(3, 5);
  g.add_edge(3, 6);
  g.add_edge(4, 6);

 std::set<int> expected = {3, 4};
  REQUIRE(g.adjacency_lists[6] == expected);
 }


TEST_CASE("Perform a depth first search")
 {
 Undirected_graph g(7);
  g.add_edge(0, 1);
  g.add_edge(0, 2);
  g.add_edge(2, 3);
  g.add_edge(2, 4);
  g.add_edge(3, 5);
  g.add_edge(3, 6);
  g.add_edge(4, 6);

 std::vector<int> ret = dfs_or_bfs(g, 0, true);
 std::vector<int> expected = {0, 1, 2, 3, 5, 6, 4};
  REQUIRE(ret == expected);
 }



TEST_CASE("Perform a breadth first search")
 {
 Undirected_graph g(7);
  g.add_edge(0, 1);
  g.add_edge(0, 2);
  g.add_edge(2, 3);
  g.add_edge(2, 4);
  g.add_edge(3, 5);
  g.add_edge(3, 6);
  g.add_edge(4, 6);

 std::vector<int> ret = dfs_or_bfs(g, 0, false);
 std::vector<int> expected = {0, 1, 2, 3, 4, 5, 6};
  REQUIRE(ret == expected);
 }
