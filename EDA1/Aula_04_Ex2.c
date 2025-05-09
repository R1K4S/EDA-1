#include <stdio.h>
int main(){ 
    int a,b,c,*d,*e;   
    d = &a;
    e = &b;
    scanf(" %d", &a);
    scanf(" %d", &b);
    printf("Valor da variavel: %d\n", a);
    printf("Valor da variavel: %d\n", b);
    printf("Troca de vaores\n");
    d = &b;
    e = &a;
    printf("Valor da variavel: %d\n", *d);
    printf("Valor da variavel: %d\n", *e);
    return 0;
}   