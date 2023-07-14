#include<stdio.h>

int main()
{
    int row, col, space;
    for(row=1; row<=5; row++) {
        for(col=1; col<=6-row; col++) {
            printf("  ");}          
            for(col=row; col>=1; col--) {
                printf("%d ", col);}
            for(col=2; col<=row; col++){
                printf("%d ", col);}
        printf("\n");
    }
    return 0;
}