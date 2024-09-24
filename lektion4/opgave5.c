/* General condition loop - Euclid again*/

#include <stdio.h>

int main(void) {
  int i, j, small, large, remainder;
 
  printf("Enter two positive integers: ");
  scanf("%d %d", &i, &j);

  small = i <= j ? i : j;
  large = i <= j ? j : i;
  
  while (small > 0){
    remainder = large % small;
    large = small;
    small = remainder;
  }

  printf("GCD of %d and %d is %d\n\n", i, j, large);
  
  return 0;
}   

#include <stdio.h>

int main(void) {
  int a, b, i, j, remainder;
 
  printf("Enter two non-negative integers: ");
  scanf("%d %d", &a, &b);

  i = a; j = b;  /* We don't know if i > j */  
  while (j > 0){
    remainder = i % j;
    i = j;
    j = remainder;
  }

  printf("GCD of %d and %d is %d\n\n", a, b, i);
  
  return 0;
} 