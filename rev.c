#include<stdio.h>

int n[3];

int main(void)
{
   int i=0;
   do
   {
    printf("Enter %ith index number of 3-digit number:",i);
    scanf("%i",&n[i]);
    i++;
   }
   while(i<3);
   printf("Entered number:%i%i%i\nReversed Number:%i%i%i\n",n[0],n[1],n[2],n[2],n[1],n[0]);
}
