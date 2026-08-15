#include "Printsetvector.h"
#include <vector>
#include <set>

int main() {

  std::vector<std::set<int>> sv(0);

  std::set<int> sa = {1,5,1};
  std::set<int> sb = {-5,7,1};
  std::set<int> sc = {5,6,9};

  sv.push_back(sa);
  sv.push_back(sb);
  sv.push_back(sc);

  printsetvector(sv);
}
