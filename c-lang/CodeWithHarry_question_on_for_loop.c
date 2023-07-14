//Write a program to print the multiplication table of 10 in reversed order

/*#include<stdio.h>

int main(){
  int i;  //---> Multiplication Table of 10 In Reverse
  for(i=10; i; i--){
    printf("10 x %d = %d \n", i, 10*i);
  }
  return 0;
}*/

//Write a program to sum first ten natural number using while loop, do-while loop, and for loop. 

/*#include<stdio.h>

 int main(){
  int i=0, sum=0, n;
  printf("Enter the n number: ");
  scanf("%d", &n);
  //  for(i=0; i<=n; i++){
  //   sum +=i;
  // }
  // while(i<=n){
  //   sum +=i;
  //   i++;
  // }
  do{
    sum +=i;
    i++;
  }while(i<=n);
  printf("the sum of the natural number from (1 to %d) is %d \n",n ,sum);
  return 0;
 }*/


//Write a program to calculate the factorial of a given number using a for loop

/*#include<stdio.h>

int main(){
  // factorial(4) = 1 * 2 * 3 * 4
  // factorial(6) = 1 * 2 * 3 * 4 * 5 * 6
  int i=0, n=5, factorial=1;
  for(i=1; i<=n; i++){
    factorial *=i;
  }
  printf("the value of factorial %d is %d", n, factorial);

  return 0;
}*/


//Write a program to check whether a given number is prime or not, using loop.

/*#include <stdio.h>

int main()
{
  //Prime Number = A prime number (or a prime) is a natural number greater than 1 that is not a product of two smaller natural number. 
  //Disclaimer: This is not the best method to solve this problem
  int n = 20, prime = 1;
  for (int i = 2; i < n; i++)
  {
    if (n % i == 0)
    {
      prime = 0;
      break;
    }
  }
  if (prime == 0)
  {
    printf("This is not a prime number");
  }
  else
  {
    printf("This is a prime number");
  }
  return 0;
}*/