//Source: https://www.section.io/engineering-education/graphs-in-data-structure-using-cplusplus/
//Source: https://www.geeksforgeeks.org/breadth-first-search-or-bfs-for-a-graph/
//Source: https://www.programiz.com/dsa/graph-dfs

#ifndef _GRAPH_HPP_
#define _GRAPH_HPP_

#include <iostream>
#include <list>
#include <vector>
using namespace std;

class Graph {
  public:
    list<int> *adjlist;
    int n;
    bool *DFSvisited;
    vector<int> DFSnodes;
    vector<int> BFSnodes;

    Graph();
    Graph(int n);

    void addEdge(int u, int v, bool bi);
    void printGraph();
    void BFS(int s);
    void DFS(int s);

    vector<int> getBFS();
    vector<int> getDFS();
};

#endif