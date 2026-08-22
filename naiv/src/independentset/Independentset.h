#ifndef INDEPENDENTSET_H
#define INDEPENDENTSET_H

#include "graph/Graph.h"
#include <set>

// Find the largest independent set of the given undirected graph.
//
// Notes:
// - The given Graph g has node indices 0 ... n.
// - There could be another independent set of the same size.
std::set<int> independentset(Graph* g);

#endif
