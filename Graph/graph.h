#pragma once
#include <vector>
class Edge;
class Node;
struct Graph{
    Graph();
    unsigned int node_pos, edge_pos;
    std::vector<Edge> edge_list;
    std::vector<Node> node_list;
    void add_edge(const int& edge_value, const int& pos_v1, const int& pos_v2);
    void add_node(const int& node_value);
    std::vector<Node> adj_nodes(const int& node_position);
};