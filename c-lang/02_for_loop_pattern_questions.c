/*#include<stdio.h>
                     //Pattern36 
int main(){
  int row, col, space;
  int n=4;
  for(row=0; row< 2 * n; row++){
  int totalColsInRow = row > n ? 2 * n - row : row;
     for(col=0; col < totalColsInRow; col++){
      printf("* ");
     }
     printf("\n");
  }
  return 0;
}*/


/*#include<stdio.h>
                    //Pattern1
int main(){
  int row, col, space;
  int n=4;
  for(row=0; row<=4; row++){
    for(col=0; col<=row; col++){
      printf("* ");
    }
    printf("\n");
  }
  return 0;
}*/

/*#include<stdio.h>
                    //Pattern4
int main(){
  int row, col, space;
  int n=5;
  for(row=1; row<=n; row++){
    for(col=1; col<=n; col++){
    col>=row ? printf("* "): printf("  "); 
    }
    printf("\n");
  }
  return 0;
}*/

#include<stdio.h>
                    //Pattern4
int main(){
  int row, col, space;
  int n=5;
  for(row=1; row<=n; row++){
    for(col=1; col<=n; col++){
    col>=row ? printf("* "): printf("  "); 
    }
    printf("\n");
  }
  return 0;
}