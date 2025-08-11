#include<stdio.h>

int main(void)
{
    int n=0;
    printf("Enter no of rows: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int d=0;d<(n-1-i);d++)
        {
            printf(" ");
        }
        for(int j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}