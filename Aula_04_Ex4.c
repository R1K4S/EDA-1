#include <stdio.h>
int main(){ 
    int a,b,c,*d,*e;   
    d = &a;
    e = &b;
    scanf(" %d", &a);
    scanf(" %d", &b);
    printf("Valor da variavel: %d da posição %p\n", a,d);
    printf("Valor da variavel: %d da posição %p\n", b,e);
    printf("Troca de vaores\n");
    c = *d;
    *d = *e;
    *e = c;
    printf("Valor da variavel: %d da posição %p\n", a,d);
    printf("Valor da variavel: %d da posição %p\n", b,e);
    return 0;
}   