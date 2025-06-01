#include <stdio.h>
long int Multi(int a, int b)
{
    if (b == 0)
        return a;
    return a + Multi(a, b - 1);
}
int main()
{
    int a, b;
    printf("Digite o numero 1: ");
    scanf(" %d", &a);
    printf("Digite o numero 2: ");
    scanf(" %d", &b);
    long int multi = Multi(a, b - 1);
    printf("%ld\n", multi);
    return 0;
}