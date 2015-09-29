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
  A[j] = temp;

}

void bubble(int array[], int length) {
  int i;
  int swapped;
  do {
    swapped = 0;
  for(i = 0; i < length - 1; i++) {
    if (array[i] > array[i+1]) {
      swap(array, i, i+1);
      swapped = 1;
    }
  }
  }
  while(swapped);
}

int main(int argc, char *argv[]) {
  int i;
  int n[argc-2];
  int length = argc - 2;

  
  for(i = 0; i < argc; i++) {
    printf("%s ", argv[i]);
  }

  printf("\n");

  for(i = 0; i < length; i++) {
    sscanf(argv[i+2], "%d", &n[i]);
  }
    
  bubble(n, length);
  
  printf("Sorted list in ascending order:\n");
  for(i = 0; i < length; i++) {
    printf("%d ", n[i]);
  }

  printf("\n");
  
  return 0;
}
