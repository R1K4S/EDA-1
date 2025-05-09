#include <stdio.h>
int main(){ 
    int a,*b,c=1;   
    a = 0;
    b = &a;
    do
    {
        printf("Valor da variavel: %d\n", *b);
        scanf(" %d", &c);
        (*b)++;
    }while(c!=0);
    return 0;
}   