#include "Matrixtosets.h"
#include <set>
#include <vector>
#include "matrix/Matrix.h"

std::vector<std::set<int>> matrixrowstosets(Matrix* matrix) {

  // Wir kennen, daß die Anzahl von Zeilen gleich die Anzahl von
  // Mengen ist.
  std::vector<std::set<int>> sets(matrix -> rows);

  for (int i = 0; i < matrix -> rows; i++) {
    for (int j = 0; j < matrix -> cols; j++) {
      sets.at(i).insert(matrix -> get(i, j));
    }
  }

  return sets;
}
