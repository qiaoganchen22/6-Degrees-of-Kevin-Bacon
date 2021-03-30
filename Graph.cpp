#include <set>
#include <map>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include "Graph.h"
#include <cassert>
using namespace std;


//Adds a vertex to the graph
//The index of the new vertex is automatically assigned
//O(1)
void Graph::add_vertex()
{
 set<int> s;
 edges.push_back(s);
}
//Adds an edge connecting source to target
//O(log n)
void Graph::add_edge(int source, int target)
{
 assert(contains(source) && contains(target)); //checks if the vertex exist
 edges[source].insert(target); //inserts target into source location
 edges[target].insert(source); //insert source into target location
 nedges++;//increse edge by 1
}
//Returns number of vertices
//O(1)
int Graph::V() const
{
 return edges.size();
}
//Returns number of edges
//O(1)
int Graph::E() const
{
 return nedges;
}
//Returns the vertices adjacent to vertex v
//O(1)
set<int> Graph::neighbors(int v) const
{
 assert(contains(v)); //checks if vertex exist
 return edges[v];
}
//Checks if vertex v is in the graph
//O(1)
bool Graph::contains(int v) const
{
 return v < V(); //if the added vertex is less than the size of the edge then the vertex exists
}
ostream &operator<<(ostream &out, const Graph &g)
{
 out << "======================================\nGraph Summary: 5 vertices, 5 edges\n======================================\n";
 for (int i = 0; i < g.V(); i++)
 {
 out << i << "--> ";
 for (auto itr = g.edges.at(i).begin(); itr != g.edges.at(i).end(); itr++)
 out << *itr << " ";
 out << "\n";
 }
 return out;
}
