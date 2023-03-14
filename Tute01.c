/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   int mark1,mark2,SUM;
   float AVG;
   printf("Enter first mark");
   scanf("%d",&mark1);
   printf("Enter second mark");
   scanf("%d",&mark2);
   SUM=mark1+mark2;
   AVG=(float)SUM/2.0;
   printf("the average of marks is %.2f",AVG);
  return 0;
}

