/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int maths,science,total,average;

  printf("Enter maths marks");
  scanf("%d",&maths);

  printf("Enter science marks");
  scanf("%d",&science);

  total=maths+science;
  average=total/2;
  printf("Average is %d",average);
  
  return 0;
}

