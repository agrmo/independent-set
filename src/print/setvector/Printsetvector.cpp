#include <iostream>
#include <vector>
#include <set>
#include "Printsetvector.h"

void printsetwithoutnewline(std::set<int> s) {
  std::cout << "{";

  int count = 0;
  for (int zahl : s) {
    
    if (count != 0) {
      std::cout << ", ";
    }
    
    std::cout << zahl;

    count++;
  }

  std::cout << "}";
}

void printsetvector(std::vector<std::set<int>> sv) {
  
  std::cout << "[";
  
  for (int i = 0; i < sv.size(); i++) {
    
    // "print/set/Printset.h" prints a newline after each set which I
    // prefer actually, but we cannot use that here because I want my
    // goddamn commas, so let's just reimplement it.

    printsetwithoutnewline(sv.at(i));

    if (i + 1 < sv.size()) {
      std::cout << ",\n";
    }
  }

  std::cout << "]\n";
}
