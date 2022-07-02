#include "graph.h"
#include "node.h"
#include "edge.h"
#include <vector>
#include <iostream>

int main(){
	std::cout << " VS terminal NOT Working fine\n";
	Graph g = Graph();
    std::cout << g.node_pos << " , " << g.edge_pos << "\n";
    // unsigned int node_pos = g.node_pos;
    // int node_value = g.node_list[node_pos].value;
    // std::cout << "Value of node 0 is ; " << node_value << "\n";
    g.add_node(10);
    std::cout << g.node_pos << "\n" ;
    g.add_node(20);
    std::cout << g.node_pos << "\n" ;
    g.add_node(30);
    std::cout << g.node_pos << "\nsize " << (g.node_list.size());
    
    g.add_edge(1, 0, 1);
    g.add_edge(2, 0, 2);
    g.add_edge(3, 1, 2);

    for (Edge e : g.edge_list){
        std::cout << "\nFirst node " << ((e.node1)->value) << " , Second node " 
        <<  ((e.node2)->value) << "\n";
    }
    Node n1 = g.node_list[2];
    for(Edge* e : n1.adj_edge){
        std::cout << e->value << "\n";
    }
    Node n2 = g.node_list[1];
    for(Edge* e : n2.adj_edge){
        std::cout << e->value << "\n";
    }
    
}