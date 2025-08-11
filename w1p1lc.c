#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int n= get_int("Rows:");
    //loop print rows
    for(int i=0;i<n;i++)
    {
        //loop for leading spaces
        for(int j=0;j<(n-i-1);j++)
            {
            printf(" ");
            }
        //loop for hashes
        for(int k=0;k<=i;k++)
            {
            printf("#");
            }
        printf("\n");
    }
}
