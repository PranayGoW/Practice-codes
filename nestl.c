#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int c=get_int("Enter column number:");
    int r=get_int("Enter row number:");
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
