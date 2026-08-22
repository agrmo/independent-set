#include "Matrixtosets.h"
#include "matrix/Matrix.h"
#include "matrix/factory/Matrixfactory.h"
#include "print/setvector/Printsetvector.h"
#include <iostream>
#include <set>
#include <vector>

int main() {

  std::vector<int> a = {3,1,2};
  std::vector<int> b = {5,4,6};
  std::vector<int> c = {7,8,9};

  Matrixfactory mf(3,3);

  mf.fillnextrow(&a);
  mf.fillnextrow(&b);
  mf.fillnextrow(&c);

  Matrix* matrix = mf.matrix;

  std::vector<std::set<int>> sets = matrixrowstosets(matrix);

  delete matrix;
  
  printsetvector(sets);
}
