// #include "node.h"
#pragma once
class Node;         // Forward declaration for Node instead of including <node.h>
struct Edge{
    Edge (const int& edge_value);
    int value;
    Node* node1;
    Node* node2;
    Node* opposite_node(Node* node);
};