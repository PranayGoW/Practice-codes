#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int n=get_int("Enter n:");
    //row change
    for(int i=0;i<n;i++)
    {
        //hash printing
        for(int j=0;j<=i;j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
