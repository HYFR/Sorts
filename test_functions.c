#include <stdio.h>
#include "assert.h"
#include "functions.h"

int main() {

  printf("\n");
  //demonstrates that the bubble sort works on even length arrays.
  int b1[4] = {1, 4, 3, 2};
  int b2[4] = {1, 2, 3, 4};
  int length1 = 4;

  bubble(b1, length1);
  assert(match(b1, b2) == 1);

  printf("Even length arrays works (bubble).\n");

  //demonstrates that the bubble sort works on odd length arrays.
  int b3[5] = {3, 5, 1, 4, 2};
  int b4[5] = {1, 2, 3, 4, 5};
  int length2 = 5;

  bubble(b3, length2);
  assert(match(b3, b4) == 1);
  printf("Odd length array works (bubble).\n");

  //demonstrates that bubble sort works with negative integers.
  int b5[3] = {-3, -5134, -143};
  int b6[3] = {-5134, -143, -3};
  int length3 = 3;

  bubble(b5, length3);
  assert(match(b5, b6) == 1);
  printf("Negative, odd numbered array works (bubble).\n");

  //demonstrates that bubble sort works with negative, even arrays
  int b7[4] = {9, -13, 0, -43};
  int b8[4] = {-43, -13, 0, 9};
  int length4 = 4;

  bubble(b7, length4);
  assert(match(b7, b8) == 1);
  printf("Bubble sort works.\n");

  printf("\n""\n");

  int s1[4] = {1, 4, 3, 2};
  int s2[4] = {1, 2, 3, 4};
  int length5 = 4;

  selection(s1, length5);
  assert(match(s1, s2) == 1);
  printf("Even length array works (selection).\n");

  int s3[5] = {3, 5, 1, 4, 2};
  int s4[5] = {1, 2, 3, 4, 5};
  int length6 = 5;

  selection(s3, length6);
  assert(match(s3, s4) == 1);
  printf("Even length array works (selection).\n");

  int s5[3] = {-3, -5134, -143};
  int s6[3] = {-5134, -143, -3};
  int length7 = 3;

  selection(s5, length7);
  assert(match(s5, s6) == 1);
  printf("Negative, odd numbered array works (selection).\n");

  int s7[4] = {9, -13, 0, -43};
  int s8[4] = {-43, -13, 0, 9};
  int length9 = 4;

  selection(s7, length9);
  assert(match(s7, s8) == 1);
  printf("Selection sort works.\n");

  printf("\n""\n");

  int i1[4] = {1, 4, 3, 2};
  int i2[4] = {1, 2, 3, 4};
  int length10 = 4;

  insertion(i1, length10);
  assert(match(i1, i2) == 1);
  printf("Even length array works (insertion).\n");

  int i3[5] = {3, 5, 1, 4, 2};
  int i4[5] = {1, 2, 3, 4, 5};
  int length11 = 5;

  insertion(i3, length11);
  assert(match(i3, i4) == 1);
  printf("Odd length array works (insertion).\n");

  int i5[4] = {9, -13, 0, -43};
  int i6[4] = {-43, -13, 0, 9};
  int length12 = 4;

  insertion(i5, length12);
  assert(match(i5, i6) == 1);
  printf("Negative elements in an even array works (insertion).\n");

  int i7[4] = {9, -13, 0 -43};
  int i8[4] = {-43, -13, 0, 9};
  int length13 = 4;

  selection(i7, length13);
  assert(match(i7, i8) == 1);
  printf("Insertion sort works.\n");

  printf("\n");

  

}
