#include <stdio.h>
#include <string.h>
long int Fibonacci(int n1,int n2,int n){
    if(n==0)return n2;
    return Fibonacci(n2,n2+n1,n-1);
}
int main(){
    int n = 0;
    printf("Digite numero de processos: ");
    scanf(" %d", &n);
    int n2 = 0;
    if(n >= 1) n2 = Fibonacci(0,1,n);
    printf("%d\n",n2);
}