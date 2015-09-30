 /* Japhet M. Perez
21 September 2015
Alex Noguchi
CS 232
O(n**2) Sorts v1 */

#include <stdio.h>
#define MAX 25

void swap(int A[], int i, int j) {
  int temp;
  temp = A[i];
  A[i] = A[j];
  A[j] = temp;
}

void mergeSort(int array[], int low, int mid, int high) {
  int i;
  int m;
  int k;
  int l;
  int temp[MAX];

    l = low;
    i = low;
    m = mid + 1;

    while((l <= mid) && (m <= high)) {

         if(array[l] <= array[m]) {
             temp[i] = array[l];
             l++;
         }
         else{
             temp[i] = array[m];
             m++;
         }
         i++;
    }

    if(l > mid) {
         for(k = m; k <= high; k++) {
             temp[i] = array[k];
             i++;
         }
    }
    
    else {
         for(k = l; k <= mid; k++) {
             temp[i] = array[k];
             i++;
         }
    }
   
    for(k = low; k <= high; k++) {
         array[k] = temp[k];
    }
}
  
void bubble(int array[], int length) {
  int i;
  int swapped;
  do {
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

void merge(int array[], int low, int high) {
  int mid;

  if(low < high) {
    mid = (low + high) / 2;
    merge(array, low, mid);
    merge(array, mid + 1, high);
    mergeSort(array, low, mid, high);
  }
}

int main(int argc, char *argv[]) {
  int i;
  int n[argc-2];
  int length = argc - 2;
  int beginning = 0;
  char word[MAX];

  
  for(i = 0; i < argc; i++) {
    printf("%s ", argv[i]);
  }

  printf("\n");

  for(i = 0; i < length; i++) {
    sscanf(argv[i+2], "%d", &n[i]);
  }


  if(argv[1][0] == 'm') {
    merge(n, beginning, length - 1);
  }
  else if(argv[1][0] == 'i') {
    insertion(n, length);
  }
  else if(argv[1][0] == 'b') {
    bubble(n, length);
  }
  else {
    printf("Type one of three required words: merge, insertion, or bubble\n");
    return;
  }
  
  printf("Sorted list in ascending order:\n");
  for(i = 0; i < length; i++) {
    printf("%d ", n[i]);
  }

  printf("\n");
  
  return 0;
}
