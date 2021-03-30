#include <iostream>
#include "Graph.h"
using namespace std;

int main()
{
    Graph QiaoGanChengraph;
    QiaoGanChengraph.add_vertex();
    QiaoGanChengraph.add_vertex();
    QiaoGanChengraph.add_vertex();
    QiaoGanChengraph.add_vertex();
    QiaoGanChengraph.add_vertex();
    QiaoGanChengraph.add_edge(0, 2);
    QiaoGanChengraph.add_edge(0, 4);
    QiaoGanChengraph.add_edge(1, 4);
    QiaoGanChengraph.add_edge(2, 0);
    QiaoGanChengraph.add_edge(2, 3);
    QiaoGanChengraph.add_edge(2, 4);
    QiaoGanChengraph.add_edge(3, 2);
    QiaoGanChengraph.add_edge(4, 0);
    QiaoGanChengraph.add_edge(4, 1);
    QiaoGanChengraph.add_edge(4, 2);
    cout << QiaoGanChengraph;
    return 0;
}