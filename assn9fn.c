/*************************
*       Gus Wiedey       *
*           c2           *
* Assignment 9 Function  *
*        MM/DD/YY        *
*************************/

#include <stdio.h>

float array_sum(float farray[], int alen) {
  int j;
  float sum = 0;
  for(j = 0; j < alen; j++) {
    sum += farray[j];
  }
  return sum;
}
