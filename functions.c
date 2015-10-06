#include <stdio.h>
#define MAX 25

// This swap function is implemented in the bubble and insertion sort.
void swap(int A[], int i, int j) {
  int temp;
  temp = A[i];
  A[i] = A[j];
  A[j] = temp;
}

void bubble(int array[], int length) {
  int i;
  int swapped;
  do { //do serves to check that the array has been iterated through the appropriate amount of time and ordered.
    swapped = 0;
  for(i = 0; i < length - 1; i++) {
    if (array[i] > array[i+1]) {
      swap(array, i, i + 1);
      swapped = 1;
    }
  }
  }
  while(swapped);
}

void insertion(int array[], int length) {
  int i;
  int swapped;
  int j;

  do {
    swapped = 0;
  for(i = 1; i <= length - 1; i++) {
    j = i;
    while(j > 0 && array[j] < array[j-1]) {
      swap(array, j, j - 1);
      j--;
      swapped = 1;
    }
  }
  }
  while(swapped);
}

void selection(int array[], int length) {
  int swapped;
  int i;
  int j;
  int min;

  do {
    swapped = 0;
    for(j = 0; j < length - 1; j++) {
      min = j;
      for(i = j + 1; i < length; i++) {
	if(array[i] < array[min]) {
	      min = i;
	}
      }
      if(min != j) {
	swap(array, j, min);
      }
    }
  }
  while(swapped);
}
