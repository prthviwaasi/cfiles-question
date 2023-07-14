#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  int number;
  srand(time(0));
  number = rand()%100 + 1;  // Generates a random number between 0 to 100  
  printf("The Number is %d", number);
  return 0;
};