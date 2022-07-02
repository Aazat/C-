#include "node.h"
#include "edge.h"
// class *Node;

Edge::Edge (const int& edge_value){
    this->value = edge_value;
}

Node* Edge::opposite_node(Node* node){
    if(node == this->node1)
        return this->node2;
    return this->node1;
}