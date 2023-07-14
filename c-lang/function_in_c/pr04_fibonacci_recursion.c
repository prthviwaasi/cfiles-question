#include <stdio.h>
int fibonacci(int n);

int main()
{
  int a;
  printf("Enter the number: \n");
  scanf("%d", &a);
  printf("The value of the fibonacci of number %d is %d.\n", a, fibonacci(a));
  // formula--> fib(n) = fib(n-1) + fib (n-2
  
  // int n = 10;

  // for (int i = 0; i < n; i++) {
  //   printf("%d ", fibonacci(i));
  // }
  return 0;
}

int fibonacci(int n)
{
  if (n == 1)
  {
    return 0;
  }
  if (n == 2)
  {
    return 1;
  }
  else
  {
    return fibonacci(n - 1) + fibonacci(n - 2);
  }
}
