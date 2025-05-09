#include <stdio.h>
int main(){ 
    char s[11] = "Ola mundo\n";
    char *f;
    f = s;
    printf("%s", f);
    printf("Imprimindo por caracter\n");
    for(int i = 0;i < 9; i++){
        printf("%c\n", f[i]);
    }
    return 0;
}       