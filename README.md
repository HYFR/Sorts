# O(n**2) Sorts Final

First coding assignment of the quarter where I have created algorithms for bubble, insertion and select sorts.

The star emoji represents completed code.

Unit tests created :heavy_check_mark:

Files separated :heavy_check_mark:

## Bubble Sort
Bubble sort is a simple, sorting algorithm that iterates through a list to be sorted, comparing each pair adjacent to each other and swaps them if they are in the wrong order. The iteration through the list is repeated until all the numbers have been listed according to the algorithm. :star2:

## Insertion Sort
Insertion sort is a simple, sorting algorthim that builds the final sorted array one element at a time. This algorithm iterates through a list, removes one element, and finds the location where it belongs. This process continues until the list is sorted. :star2:

## Selection Sort
The selection sort algorithm divies input into two subsets. The algorithm finds the smallest element in the unsorted subset and swaps it with the leftmost unsorted element, while moving to the right, until the list is sorted. This process continues until both subsets are sorted. :star2:

## Setup
First, compile the program by making main on the command line.

```
make
```

Now you can call the function of your choosing. e.g.
```
./main bubble 4 3 2 1
./main insertion 4 3 2 1
./main selection 4 3 2 1
```

any of the three will print 

```
Sorted list in ascending order:
1 2 3 4
```
## Test Setup
First, compile the unit tests by making test on the command line.
```
make test
```

Once you compile the unit test, the test functions will run automatically and display

```
./test_functions

Even length array works (bubble).
Odd length array works (bubble).
Negative, odd numbered array works (bubble).
Bubble sort works.

Even length array works (selection).
Odd length array works (selection).
Negative, odd numbered array works (selection).
Selection sort works.

Even length array works (insertion).
Odd length array works (insertion).
Negative, odd numbered array works (insertion).
Insertion sort works.
```
on the terminal.


