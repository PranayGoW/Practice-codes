#include<stdio.h>

int main(void)
{
    int x,y;
    printf("Enter x: ");
    scanf("%i",&x);
    printf("Enter y: ");
    scanf("%i",&y);
   

        if (x > y)
        {
        printf("x is greater than y\n");
        }
        else if(x<y)
        {
            printf("x is less than y\n");
        }
        else
        {
            printf("x = y\n");
        }
}
