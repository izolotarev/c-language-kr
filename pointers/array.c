#include <stdio.h>
#define SIZE 10

int main() {
  int a[SIZE];
  int *pa; //pointer to int
  pa = &a[0]; //pa points to the first element of a 
  *pa = 5;  //first element of array a equals 5
  *(pa+1) = 6; //second element of array a equals 5. Pointer arithmetic.
  pa[7] = 7;  //7th elem of a equals 7
  pa++; //pa points to the second elem of a
  *pa = 2; //second elem equals 2
  int *pa7 = &a[7];

  if (a + SIZE - pa7 > 1) {
    printf("true\n");
  }

  if (pa7 - pa > 1) {
    printf("true\n");
  }

  return 0;
}
