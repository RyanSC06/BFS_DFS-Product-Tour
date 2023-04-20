#include <iostream>
#include "Graph.hpp"
using namespace std;

Graph::Graph() {
    adjlist = new list<int> [1];
    this->n = 1;
    DFSvisited = new bool[1];
}

Graph::Graph(int n) {
    adjlist = new list<int> [n];
    this->n = n;
    DFSvisited = new bool[n];
}

void Graph::addEdge(int u, int v, bool bi) {
    adjlist[u].push_back(v);
    if (bi) {
        adjlist[v].push_back(u);
    }
}

void Graph::printGraph() {
    for (int i = 0; i < n; i++) {
        cout << i << " --> ";
        for (auto it : adjlist[i]) {
            cout << it << " ";
        }
        cout << endl;
    }
}

void Graph::BFS(int s) {
    // Mark all the vertices as not visited
    vector<bool> visited;
    for (int i = 0; i < n; i++) {
        visited.push_back(false);
    }
 
    // Create a queue for BFS
    list<int> queue;
 
    // Mark the current node as visited and enqueue it
    visited[s] = true;
    queue.push_back(s);
 
    while (!queue.empty()) {
        // Dequeue a vertex from queue and print it
        s = queue.front();
        this->BFSnodes.push_back(s);
        queue.pop_front();
 
        // Get all adjacent vertices of the dequeued
        // vertex s. If a adjacent has not been visited,
        // then mark it visited and enqueue it
        for (auto adjacent : adjlist[s]) {
            if (!visited[adjacent]) {
                visited[adjacent] = true;
                queue.push_back(adjacent);
            }
        }
    }
}

void Graph::DFS(int s) {
  DFSvisited[s] = true;
  list<int> adjList = adjlist[s];

  this->DFSnodes.push_back(s);

  list<int>::iterator i;
  for (i = adjList.begin(); i != adjList.end(); ++i)
    if (!DFSvisited[*i])
      DFS(*i);
}

vector<int> Graph::getBFS() {
    return (this->BFSnodes);
}

vector<int> Graph::getDFS() {
    return (this->DFSnodes);
}

// int main() {
//     Graph g(5);
//     g.addEdge(1,2,true);
//     g.addEdge(4,2,true);
//     g.addEdge(1,3,true);
//     g.addEdge(4,3,true);
//     g.addEdge(1,4,true);

//     g.printGraph();
// }

// int main() {
//     // Create a graph given in the above diagram
//     Graph g(17);
//     g.addEdge(0, 1, true);
//     g.addEdge(0, 4, true);
//     g.addEdge(0, 7, true);
//     g.addEdge(0, 10, true);
//     g.addEdge(0, 12, true);
//     g.addEdge(0, 15, true);

//     g.addEdge(1, 2, true);
//     g.addEdge(1, 3, true);

//     g.addEdge(4, 5, true);
//     g.addEdge(4, 6, true);

//     g.addEdge(7, 8, true);
//     g.addEdge(7, 9, true);

//     g.addEdge(10, 11, true);

//     g.addEdge(12, 13, true);
//     g.addEdge(12, 14, true);

//     g.addEdge(15, 16, true);
 
//     cout << "Following is Breadth First Traversal "
//          << "(starting from vertex 0) \n";
//     g.BFS(0);

//     cout << endl << "Following is Depth First Traversal"
//             " (starting from vertex 0) \n";
 
//     // Function call
//     g.DFS(0);
 
//     return 0;
// }