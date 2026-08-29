#include "Comb.h"
#include <vector>

Comb::Comb() {
  // Initialize the matrix (the "outer vector").
  comb = new std::vector<std::vector<int>*>(0);

  // Note the variable is on the heap. It will need to be freed.
}

Comb::~Comb() {
  // Because the comb is on the heap we need need to free all inner
  // vectors ("rows") and the outer vector.

  for (int i = 0; i < (*comb).size(); i++) {
    (*comb)[i] -> clear();
  }
  
  (*comb).clear();
}

std::vector<int> Comb::get(int n) {
  // Cols is unique for each row.
  // Get the num of cols for this row.
  int cols = (*comb)[n] -> size();

  // Pass by copy. I am paranoid. Do it integer by integer.
  std::vector<int> row(cols);

  for (int i = 0; i < cols; i++) {
    row.at(i) = get(n, i);
  }

  return row;
}

int Comb::get(int m, int n) {
  return comb -> at(m) -> at(n);
}

void Comb::add() {
  comb -> push_back(new std::vector<int>(0));
}

void Comb::add(int n) {
  for (int i = 0; i < n; i++) {
    add();
  }
}

void Comb::push_back(int m, int v) {
  (*comb)[m] -> push_back(v);
}

int Comb::size() {
  return comb -> size();
}

int Comb::size(int n) {
  return comb -> at(n) -> size();
}
