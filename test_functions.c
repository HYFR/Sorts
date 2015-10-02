#include <stdio>
#include "functions.h"

int main(int argc, char *argv[]) {
  int array[4] = [1, 2, 3, 4];
  int length = 4;

  
    assert(bubble(array, length) == [1, 2, 3, 4]);

    return 0;
}
