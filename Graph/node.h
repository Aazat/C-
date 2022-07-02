#pragma once
#include <vector>
class Edge;
struct Node{
    Node(const int& value);
    int value, position;
    std::vector<Edge*> adj_edge;
    // std::ostream operator<<(std::ostream& os, const Node& n);
};