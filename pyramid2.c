#include<stdio.h>
#include<cs50.h>

int main(void)
{
    //input
    int n=get_int("Enter n:");
    //loop row change
    for(int r=0;r<n;r++)
    {
        //print dashes
        for(int d=0;d<(n-r-1);d++)
        {
            printf(" ");
        }
        //print hashes
        for(int h=0;h<=r;h++)
        {
            printf(" #");
        }
        printf("\n");
    }
}
