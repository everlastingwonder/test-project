/***********************
*      Gus Wiedey      *
*          c2          *
* Assignment 9 Driver  *
*       MM/DD/YY       *
***********************/

#include <stdio.h>

float array_sum(float farray[], int alen);

main() {
  int i, len;
  printf("\nLength of float array: ");
  scanf("%d", &len);
  printf("%d\n", len);
  float arrayin[len];
  printf("Enter %d floats:\n", len);
  for(i = 0; i < len; i++) {
    scanf("%f", &arrayin[i]);
    printf("%f\n", arrayin[i]);
  }
  float sumout = array_sum(arrayin, len);
  printf("\n%f\n", sumout);
}
