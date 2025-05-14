#include <stdio.h>
long int Pow(int n,int x){
    if(x == 0)return n;
    return n * Pow(n,x-1);    
}
int main(){
    int n = 0;
    int x = 0;
    printf("Digite o numero: ");
    scanf(" %d", &n);
    printf("Digite a potencia: ");
    scanf(" %d", &x);
    long int pow = Pow(n,x-1);
    printf("%ld\n",pow);
    return 0;
}