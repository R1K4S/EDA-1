#include <stdio.h>  
long int SomaDigit(int n){
    if(n == 0)return 0;
    return (n % 10) + SomaDigit(n / 10);    
}
int main(){
    int n = 0;
    printf("Digite o numero: ");
    scanf(" %d", &n);
    long int soma = SomaDigit(n);
    printf("%ld\n",soma);
    return 0;
}