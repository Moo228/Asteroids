#include "linearAlg.h"
#include <stdint.h>

// A function that calculates the given vector left multiplied by the given
// matrix. This will be used to calculate rotations.
vector2D matVectMultAx2D(matrix2x2 matrix, vector2D vector) {
  // Calculate the vector left multiplied by the matrix.
  vector2D returnVect;
  returnVect.x =
      dotProduct((vector2D){.x = matrix.vect1.x, .y = matrix.vect2.x}, vector);
  returnVect.y =
      dotProduct((vector2D){.x = matrix.vect1.y, .y = matrix.vect2.y}, vector);
  return returnVect;
}

// Calculate the dot product of two vectors vect1 and vect2.
uint16_t dotProduct(vector2D vect1, vector2D vect2) {
  return (vect1.x * vect2.x) + (vect1.y * vect2.y);
}