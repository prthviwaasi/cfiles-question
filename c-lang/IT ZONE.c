#include<stdio.h>

int main()
{
    int row, col, space=0;
    for(row=1; row<=5; row++) {
        for(col=1; col<=5; col++) {
            if(row==1 || row==5 || col==3)
            printf("* ");
            else
            printf("  ");
        }
        for(space=1; space<=3; space++) {
            printf("  ");
        }
        for(col=1; col<=5; col++) {
            if(col==3 || row==1)
            printf("* ");
            else
            printf("  ");
        }
        for(space=1; space<=3; space++) {
            printf("  ");
        }
        for(col=1; col<=5; col++) {
            if(col==3 || row==1)
            printf("* ");
            else
            printf("  ");
        }    
        printf("\n");
    }
    return 0;
}