// #include <stdio.h>
//                 //Pattern30
// int main()
// {
//   int i, j, space;

//   for (i = 1; i <= 5; i++)
//   {
//     for (j = 1; j <= 5; j++)
//     {
//      printf("%d ", i);

//     }
//     printf("\n");
//   }
//   return 0;
// }

// #include <stdio.h>
//                 //Pattern31
// int main()
// {
//   int i, j;

//   for (i = 1; i <= 5; i++)
//   {
//     for (j = 1; j <= 5; j++)
//     {
//      printf("%d ", j);

//     }
//     printf("\n");
//   }
//   return 0;
// }

// #include <stdio.h>
//                 //Pattern1
// int main()
// {
//   int i, j;

//   for (i = 1; i <= 5; i++)
//   {
//     for (j = 1; j <= i; j++)
//     {
//      printf("* ");
//     }
//     printf("\n");
//   }
//   return 0;
// }

// #include <stdio.h>
//                 //Pattern40
// int main()
// {
//   int i, j;

//   for (i = 1; i <= 5; i++)
//   {
//     for (j = 1; j <= i; j++)
//     {
//      printf("%c ", j+64);
//     }
//     printf("\n");
//   }
//   return 0;
// }

// #include <stdio.h>
//                 //Pattern41
// int main()
// {
//   int i, j;

//   for (i = 1; i <= 5; i++)
//   {
//     for (j = 1; j <= i; j++)
//     {
//      printf("%c ", i+64);
//     }
//     printf("\n");
//   }
//   return 0;
// }

// #include <stdio.h>
//                 //Pattern5
// int main()
// {
//   int i, j;

//   for (i = 1; i <= 5; i++)
//   {
//     for (j = 1; j <= i; j++)
//     {
//      printf("%d ", j);
//     }
//     printf("\n");
//   }
//   return 0;
// }

// #include <stdio.h>
//                 //Pattern6
// int main()
// {
//   int i, j;

//   for (i = 1; i <= 5; i++)
//   {
//     for (j = 1; j <= i; j++)
//     {
//      printf("%d ", i);
//     }
//     printf("\n");
//   }
//   return 0;
// }

// #include <stdio.h>
//                 //Pattern10
// int main()
// {
//   int i, j;

//   for (i = 1; i <= 5; i++)
//   {
//     for (j = 5; j >= 1; j--)
//     {
//      i>=j ? printf("%d ", j): printf("  ");
//     }
//     printf("\n");
//   }
//   return 0;
//}


// #include <stdio.h>
//                 //Pattern8
// int main()
// {
//   int i, j;

//   for (i = 5; i >= 1; i--)
//   {
//     for (j = 5; j >= i; j--)
//     {
//      printf("%d ", j);
//     }
//     printf("\n");
//   }
//   return 0;
// }

// #include <stdio.h>
//                 //Pattern9
// int main()
// {
//   int i, j;

//   for (i=5; i >= 1; i--)
//   {
//     for (j = i; j <= 5; j++)
//     {
//      printf("%d ", j);
//     }
//     printf("\n");
//   }
//   return 0;
// }

// #include <stdio.h>
//                 //Pattern42
// int main()
// {
//   int i, j;

//   for (i = 1; i <= 5; i++)
//   {
//     for (j = i; j >= 1; j--)
//     {
//      printf("%c ", j + 64);
//     }
//     printf("\n");
//   }
//   return 0;
// }

// #include <stdio.h>
//                 //Pattern2
// int main()
// {
//   int i, j;

//   for (i = 5; i >= 1; i--)
//   {
//     for (j = 1; j <= i; j++)
//     {
//      printf("* ");
//     }
//     printf("\n");
//   }
//   return 0;
// }

// #include <stdio.h>
//                 //Pattern4
// int main()
// {
//   int i, j;

//   for (i = 1; i <= 5; i++)
//   {
//     for (j = 5; j >= 1; j--)
//     {
//      i>=j ? printf("* ") : printf("  ");
//     }
//     printf("\n");
//   }
//   return 0;
// }

// #include <stdio.h>
//                 //Pattern3
// int main()
// {
//   int i, j;

//   for (i = 1; i <= 5; i++)
//   {
//     for (j = 5; j >= 1; j--)
//     {
//      j<=i ? printf("* ") : printf("  ");
//     }
//     printf("\n");
//   }
//   return 0;
// }


// #include <stdio.h>
// // Pattern43
// int main()
// {
//   int i, j;

//   for (i = 1; i <= 7; i++)
//   {
//     for (j = 1; j <= 6; j++)
//     {
//       if (i == 1)
//       {
//         printf("%c ", j + 64);
//       }
//       else
//       {
//         printf("  ");
//       }
//     }
//     printf("\n");
//   }
//   return 0;
// }


// #include <stdio.h>
//                 //Pattern47
// int main()
// {
//   int i, j;
  
//   for (i = 1; i <= 5; i++)
//   {
//     for (j = 1; j <= i; j++)
//     {
//      printf("%d ", j%2);
//     }
//     printf("\n");
//   }
//   return 0;
// }


// #include <stdio.h>
//                 //Pattern48
// int main()
// {
//   int i, j;
  
//   for (i = 1; i <= 6; i++)
//   {
//     for (j = 1; j <= i; j++)
//     {
//      printf("%d ", i%2);
//     }
//     printf("\n");
//   }
//   return 0;
// }



// #include <stdio.h>
//                 //Pattern49
// int main()
// {
//   int i, j, k=1;
  
//   for (i = 1; i <= 5; i++)
//   {
//     for (j = 1; j <= i; j++)
//     {
//      printf("%d ", (k++)%2);
//     }
//     printf("\n");
//   }
//   return 0;
// }



// #include <stdio.h>
//                 //Pattern44
// int main()
// {
//   int i, j, k=65;
  
//   for (i = 1; i <= 7; i++)
//   {
//     for (j = 1; j <= 6; j++)
//     {
//      if(k<=90){printf("%c ", k++);}
//      else{printf("  ");}
//     }
//     printf("\n");
//   }
//   return 0;
// }


// #include <stdio.h>
//                 //Pattern47
// int main()
// {
//   int i, j;
  
//   for (i = 1; i <= 5; i++)
//   {
//     for (j = 1; j <= i; j++)
//     {
//      printf("%d ", j);
//     }
//     printf("\n");
//   }
//   return 0;
// }


#include <stdio.h>
                //Pattern10
int main()
{
  int i, j, k;

  for (i = 1; i <= 5; i++)
  {
    for( k = 6; k<=i; k++)
    {
      printf(" ");
    }
    
    for (j = 5; j >= 1; j--)
    {
     if(i>=j) { printf("%d ", j);} 
     else{printf("  ");}
    }
    printf("\n");
  }
  return 0;
}

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