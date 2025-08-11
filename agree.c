#include<stdio.h>
#include<cs50.h>
int main(){
    char c = get_char("Do You Agree?");
    if (c == 'y' || c == 'Y')
    {
        printf("Agreed\n");
    }
    if (c == 'n' || c == 'N')
    {
        printf("Not agreed\n");
    }
}
