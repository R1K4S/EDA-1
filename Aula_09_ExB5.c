#include <stdio.h>
long int Mdc(int a, int b)
{
    if ((a % b) == 0)
        return b;
    return Mdc(b, a % b);
}
int main()
{
    int a, b;
    printf("Digite o numero 1: ");
    scanf(" %d", &a);
    printf("Digite o numero 2: ");
    scanf(" %d", &b);
    long int mdc = Mdc(a, b);
    printf("%ld\n", mdc);
    return 0;
}