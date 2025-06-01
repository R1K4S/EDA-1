#include <stdio.h>
#include <stdlib.h>
#include "include/VetoresC.h"

long int Mdc(int a, int b)
{
    printf("%d\n", b);
    if ((a % b) == 0)
        return b;
    return Mdc(b, a % b);
}
int main()
{
    int *a;
    printf("Digite o tamanho do vetor ");
    scanf(" %d", &a);
    long int multi = Mdc(a, b - 1);
    printf("%ld\n", multi);
    return 0;
}