#include <stdio.h>
int factorial(int y);

int main()
{
  int a = 5;
  printf("The value of factorial %d is %d", a, factorial(a)); 
  // factorial(n) = factorial (n-1) * n
  return 0;
}

int factorial(int y)
{
  if (y == 1 || y == 0)
  {
    return 1;
  }
  else
  {
    return y * factorial(y - 1);
  }
}