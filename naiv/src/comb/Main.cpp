#include <iostream>
#include "Comb.h"
#include "print/comb/Printcomb.h"

void beispieleins() {
  // Initialize the Comb.
  // The object is on the stack. Its data is not.
  Comb c;

  // Add a row.
  c.add();

  // Add a number to row 0.
  c.push_back(0, 5);

  // 5
  std::cout << c.get(0,0) << "\n";

  // And if we want to get manually...
  std::cout << (*c.comb).at(0) -> at(0) << "\n";
}

void beispielzwei() {
  Comb c;

  c.add();
  c.push_back(0,5);

  std::cout << c.size() << "\n"; // 1
  std::cout << c.size(0) << "\n"; // 1

  printcomb(&c);
}

int main() {
  beispielzwei();
}
