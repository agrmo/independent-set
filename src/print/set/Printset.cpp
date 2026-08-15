#include <iostream>
#include <set>
#include "Printset.h"

void printset(std::set<int> s) {

  std::cout << "{";

  int count = 0;
  for (int zahl : s) {
    
    if (count != 0) {
      std::cout << ", ";
    }
    
    std::cout << zahl;

    count++;
  }

  std::cout << "}" << std::endl;
}
