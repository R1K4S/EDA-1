#include <stdio.h>
int main()
{
    FILE *fp;
    char ch;
    int pqtdecar = 0;
    fp = fopen("src/Arquivo1.txt", "r");
    while (1)
    {
        ch = fgetc(fp);
        if (ch == EOF)
            break;
        pqtdecar++;
    }
    fclose(fp);
    printf("Quantidade de Caracteres: %d", pqtdecar);
    return 0;
}
