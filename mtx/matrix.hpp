#ifndef MATRIX_HPP
#define MATRIX_HPP

#include <cstddef>

void deleteMatrix(int** t, size_t m);
void output(const int* const * t, size_t m, size_t n);
void inputMatrix(int* const * t, size_t m, size_t n);
int** create(size_t m, size_t n);

#endif
