#include <stdio.h>
int main(){ 
    int a,*b;   
    b = &a;
    a = 10101;
    printf("Valor da variavel: %d\n", *b);
    printf("Endereço da varivel: %p\n", b);
    *b = 01;
    printf("Valor da variavel: %d\n", *b);
    return 0;
}