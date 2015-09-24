/* Japhet M. Perez
21 September 2015
Alex Noguchi
CS 232
O(n**2) Sorts v1 */

#include <stdio.h>

void swap(int A[], int i, int j) {
  int temp;
  temp = A[i];

  A[i] = A[j];
  A[i] = temp;
}

void bubble(int array[], int length) {
  int i;
  for(i = 0; i < length; i++) {
    if (array[i] > array[i+1]) {
      swap(array, i, i+1);
	}
  }
}

int main(int argc, char *argv[]) {
  int i;
  int n[argc-2];
  
  for(i = 0; i < argc; i++) {
    printf("%s ", argv[i]);
  }
  printf("\n");

  return 0;
}
