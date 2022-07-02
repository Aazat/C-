#include "graph.h"
#include "node.h"
#include "edge.h"
#include <vector>
#include <iostream>

Graph::Graph(){
    this->node_pos= 0;
    this->edge_pos= 0;
}

void Graph::add_edge(const int& edge_value, const int& pos_v1, const int& pos_v2){
    Edge e = Edge(edge_value);
    e.node1 = &this->node_list[pos_v1];
    e.node2 = &this->node_list[pos_v2];
    this->edge_list.push_back(e);
    this->node_list[pos_v1].adj_edge.push_back(&this->edge_list[this->edge_pos]);
    this->node_list[pos_v2].adj_edge.push_back(&this->edge_list[this->edge_pos]);
    this->edge_pos += 1;
}

void Graph::add_node(const int& node_value){
    this->node_list.push_back(Node(node_value));
    this->node_pos += 1;
}

std::vector<Node> Graph::adj_nodes(const int& node_position){
    Node* node = &this->node_list[node_position];
    std::vector<Node> adjacent_nodes;
    for(Edge* e: node->adj_edge){
        adjacent_nodes.push_back(*(e->opposite_node(node)));
    }
    return adjacent_nodes;
}