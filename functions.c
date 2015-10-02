#include <stdio.h>
#define MAX 25

// This swap function is implemented in the bubble and insertion sort.
void swap(int A[], int i, int j) {
  int temp;
  temp = A[i];
  A[i] = A[j];
  A[j] = temp;
}

// mergeSort works exclusively for the merge sort as indicated by its name.
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

    if(temp == NULL) {
      return;
    }
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

void merge(int array[], int low, int high) {
  int mid;

  if(low < high) {
    mid = (low + high) / 2;
    merge(array, low, mid);
    merge(array, mid + 1, high);
    mergeSort(array, low, mid, high);
  }
}
