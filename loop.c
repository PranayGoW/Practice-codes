#include<stdio.h>
#include<cs50.h>
int main(void)
{
    int n = get_int("Enter number of @ :");
    while(n>0)
    {
        printf("@\n");
        n--;
    }
}
