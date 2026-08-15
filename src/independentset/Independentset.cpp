#include "Independentset.h"
#include "combination/Combination.h"
#include "graph/Graph.h"
#include "matrixtosets/Matrixtosets.h"
#include "print/matrix/Printmatrix.h"
#include "print/set/Printset.h"
#include "print/vector/Printvector.h"
#include <iostream>
#include <set>
#include <vector>

// Check if the given set of nodes is an independent set.
bool isindependentset(std::set<int> setofnodes, Graph* g) {
  
  // For each node in the set, get its neighbors and check if any of
  // its neighbors are in the set.
  for (int node : setofnodes) {
    
    // The neighbors of this node.
    std::vector<int> neighborsofnode = *(g -> comb -> comb -> at(node));

    // For each neighbor, if neighbor in setofnodes, it is not an
    // independent set.
    for (int neighbor : neighborsofnode) {
      if (setofnodes.contains(neighbor)) {
	return false;
      }
    }
  }

  // Wir haben eine eigenständige Menge gefunden!
  return true;
}

std::set<int> independentset(Graph* g) {

  // Start the algorithm.

  // Look for the largest independent sets first.
  int graphsize = g -> size();

  for (int i = graphsize; i > 0; i--) {

    std::cout << "Looking for independent set size " << i << ".\n";

    // Mache eine Liste von allen möglichen Kombinationen.
    // n = Größe des Graphen
    // k = zwischen 1 ... n

    Matrix* kombinationen = getcombinations(graphsize, i);

    // std::cout << "Combinations: ";
    // printmatrix(kombinationen);

    // rows: Kombinationen
    // cols: Knoten in einer Kombination

    // Next we need to check if, for each node in the combination,
    // none of each node's neighbors are in the set.

    // For convenience let's turn each row into a set. That way it's
    // easier to check if any of a node's neighbors are in the set.

    std::vector<std::set<int>> sets = matrixrowstosets(kombinationen);

    // sets is a list of combinations. sets[0] is the first proposed
    // independent set. We need to check if no two nodes in sets[0] are
    // neighbors.
    for (int j = 0 ; j < sets.size(); j++) {

      std::cout << "Checking subset: ";
      printset(sets.at(j));

      // This particular combination is a set of nodes.
      // It may be an independent set. Check if so.
      std::set<int> setofnodes = sets.at(j);

      if (isindependentset(setofnodes, g)) {

	// If no neighbors are in the combination, then return it
	// immediately.  We could extend this algorithm to run through all
	// possible combinations and then return a gigantic list of all
	// possible independent sets, beginning with the largest, but that
	// isn't really going to be useful. We'll end up finding a bunch
	// of small-sized sets of nodes that are far away from
	// eachother. Which could be useful I suppose from a network
	// theory perspective.
	
	return setofnodes;
      }
    }

    // All proposed independent sets of this size were tested and none
    // were found. Move on to search for an independent set of size
    // minus one.
  }

  // No independent sets were found. Worst case scenario. Return an
  // empty list of nodes.
  std::set<int> emptyset = {};
  
  return emptyset;
}
