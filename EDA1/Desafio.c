#include <stdio.h>
// Codigo de Piramide
int main(){
    int i = 0,j = 0,n,m=0;
    // i e j para loops, n e m para controle de adicionar nas casas
    scanf(" %d",&n); // tamanho da piramide
    int limit = n+1; // limite de visualização
    int piramide[100][100];
    while (m!=limit)//Quando o m chegar no centro da piramide que tem o mesmo valor do limite + 1
    {
        for(i = m;i<n;i++){
            for(j=m;j<n;j++){
                piramide[i][j]++;
            }
        }
        n--;
        m++;
    }
    m--;//aqui ele teria o valor do tamanho da piramide + 1,dimiui para visualizar
    for(i = 0;i<m;i++){
        for(j=0;j<m;j++){
            printf(" %d ", piramide[i][j]);
        }
        printf(" \n");
    }
}//O limite de visualização que fique organizao será n = 18;
