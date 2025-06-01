#include <stdio.h>
#include <stdlib.h>

// 231037727
// pn = 7;
//  psoma = 0;

int Q1(long long int valor)
{
    int *ptr, *pnumeros, pn = valor % 10, pp, psoma = 0;
    if (pn < 2)
        pn = 5 - pn;
    pnumeros = (int *)malloc(pn * sizeof(int));
    ptr = pnumeros; //
    for (pp = 0; pp < pn; pp++)
    {                       // 0 até 6 (7)
        *ptr = valor % 10;  // 0: ptr = 1; valor =21023998;
        valor = valor / 10; // 1: ptr = 8; valor = 2102399;
        ptr++;              // 2: ptr = 9; valor = 210239;
    } // 3: ptr = 9; valor = 21023;
    for (pp = 0; pp < pn; pp++)
    {
        if (pnumeros[pp] % 2 == 1)
        {
            psoma = psoma + pnumeros[pp]; // psoma: 0 + 1 =1; psoma = 1 + 9 = 10; 10 + 9 = 19
        }
    }
    free(pnumeros);
    return psoma;
}

int main()
{
    int matricula = 231037727;
    int x = Q1(matricula);
    printf("o resultado e: %d\n", x);
    return 0;
}