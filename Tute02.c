/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main(void) {
  //variable declaration
  int Distance;
  float amount;
  printf("Enter the distance of rented van travelled:");
  scanf("%d",&Distance);//input travelled distance
  //using if..else statement
  if(Distance<=30){
    amount=30*50;//calculation for the first 30km
  }
  else{
    amount=30*50+(Distance-30)*40;//calculation for the distance greater than first 30km
  }
  printf("Amount to be paid for a rented vehicle:Rs.%.2f",amount);//Display amount to be paid for the rented car
  
  return 0;
}
