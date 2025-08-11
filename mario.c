#include<stdio.h>

//initializing functions used :
int get_size();
void print_block(int size);


int main(void)
{
    //get size :
    int n = get_size();

    //print block :
    print_block(n);
}


//-------------------------------------------------------------------------------------------------------

//size input function

int get_size(void)
{
    int n;
    do
    {
        printf("Enter size, n:");
        scanf("%d",&n);
    }
    while(n<1);
    return n;
}

//----------------------------------------------------------------------------------------------------------
//printing function 

void print_block(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
