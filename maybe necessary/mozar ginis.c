#include<stdio.h>
int main()
{
    int i,j;
    for(j=1;j<=5;j=j++)
    {
        for(i=1;i<=j;i++)
           {
                printf("*");
           }
           printf("\n");
    }
    return 0;
}