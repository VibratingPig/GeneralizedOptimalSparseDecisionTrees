#include "graph.hpp"

Graph::Graph(void) {}

Graph::~Graph(void) {}

void Graph::clear(void) {
    this -> vertices.clear();
    this -> edges.clear();
    this -> translations.clear();
    this -> children.clear();
    this -> bounds.clear();
    return;
}

unsigned int Graph::size(void) const {
    return this -> vertices.size();
}