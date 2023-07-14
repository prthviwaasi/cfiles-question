#include<stdio.h>
int sum(int a, int b); //function prototype declaration

int main(){
  int c;
  c = sum(15, 20); //function call
  printf("The value of c is %d", c);                        //in this funtion 15 and 20    and     // int a and int b
  return 0;     //arguments are the the actual value passed to the function to make a call but a parameters are just the place-holders
}

int sum(int a, int b){
  int c;
  c = a + b;
  return c;

}