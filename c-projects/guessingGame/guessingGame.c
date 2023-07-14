#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  int number, guess, nguesses=1;
  srand(time(0));
  number = rand()%100 + 1;  // Generates a random number between 0 to 100  
  printf("The Number is %d \n", number);
  // Keep running the program until the number is guessed

  do {
       printf("Guess The Number Between 1 To 100\n");
       scanf("%d", &guess);
       if(guess>number){
          printf("Lower Number Please..!\n");
       }
       else if(guess<number){
          printf("Higher Number Please..!\n");
       }
       else{
          printf("You Guessed It Right in %d Attempts..!\n", nguesses);
       }
      nguesses++;
   } while(guess!=number);
  return 0;
}