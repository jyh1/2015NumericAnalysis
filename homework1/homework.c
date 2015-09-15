#include <stdio.h>
#include "math.h"
#define Infinity 2147483657
#define Tolearate 0.0000001

float Sum(float x) {
  int k;
  float sum=0, temp;
  for (k = 1; k < Infinity; k++) {
    temp = 1/(k * (k + x));
    if (temp < Tolearate) break;
    sum += temp;
    /* code */
  }
  printf("x = %.1f,y = %.15f\n", x, sum );
  /* code */
  return 0;
}
int main(){
  int n = 7;
  float x[7] = {0, 0.5, 1, sqrt(2), 10, 100, 300};
  int i;
  for (i = 0; i <= n - 1; i++){
    Sum (x[i]);
  }
  return 0;
}
