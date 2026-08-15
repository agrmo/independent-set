#ifndef MATRIXTOSETS_H
#define MATRIXTOSETS_H

#include <set>
#include <vector>
#include "matrix/Matrix.h"

// Given a matrix, turn its rows into sets.
// I guess we can pass by value here.
std::vector<std::set<int>> matrixrowstosets(Matrix* matrix);

// Given a matrix, turn its columns into sets.
// ...

#endif
