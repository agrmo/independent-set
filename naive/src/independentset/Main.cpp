#include <iostream>
#include "Independentset.h"
#include "print/comb/Printcomb.h"
#include "print/set/Printset.h"

int main() {

  /*


       0--------1
      /  _____// \
     / _/    /    \
    /_/     /      \
   2----   3        4
    \   \   \       /
     \   \   \_    /
      \   \____\  /
       5---------6


   Graph Größe: 7
   Was ist die größte unabhängige Menge?
   Antwort: {0,3,4,5}
    
  */

  int size = 7;
  Pairlist* p = new Pairlist();
  p -> add(0,1);
  p -> add(0,2);
  p -> add(1,2);
  p -> add(1,3);
  p -> add(1,4);
  p -> add(2,5);
  p -> add(2,6);
  p -> add(3,6);
  p -> add(4,6);
  p -> add(5,6);

  Graph g(size, p);
  std::cout << "Graph:\n";
  printcomb(g.comb);

  // Thankfully, the graph does not need to be doubled for the
  // independent set algorithm to work. If two neighbors are in a
  // proposed set,

  // 4: [ ... 5 ... ]
  // 5: [ ... no 4 ... ]

  // Then the proposed set will still have both 4 and 5:
  // proposed set: { ... 4 ... 5 ... }

  // and so the proposed set will still be rejected. Thankfully.

  // In fact the speed of the algorithm will be much quicker than for
  // a doubled Graph because there is half as much data to run
  // through. Nice.
  
  std::set<int> is = independentset(&g);
  std::cout << "Largest independent set of Graph: ";
  printset(is);
}
