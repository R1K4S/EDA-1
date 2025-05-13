#include <stdio.h>
#include <stdlib.h>
int Menu(int estoque[]);
void Comprar(int estoque[]);
void Adicionar(int estoque[]);
void ExibirEstoque(int estoque[]);


int Menu(int estoque[]){
    int opcao = 0;
    int x;
    printf("Selecione as seguintes opções\nComprar item no estoque: 1\nAdicionar produto: 2\nExibir estoque: 3\nSair: 4\nDigite a opção: ");
    scanf(" %d",&opcao);
    switch(opcao){
        case 1: {
            Comprar(estoque);
            break;
        }
        case 2: {
            Adicionar(estoque);
            break;
        }
        case 3: {
            ExibirEstoque(estoque);
            Menu(estoque);
            break;
        }
        case 4: {
            printf("Saindo do Programa\n");
            return 0;
        }
    }
    return 0;
}

void Comprar(int estoque[]){
    int x = 0;
    int y;
    printf("Digite o indice do produto que deseja comprar: ");
    scanf(" %d", &x);
    printf("Produto selecionado: %d\n", x);
    printf("Digite a quantidade a ser comprada: ");
    scanf(" %d", &y);
    estoque[x] = estoque[x]-y;
    Menu(estoque);
}

void Adicionar(int estoque[]){
    int x;
    int y;
    printf("Digite o indice do novo produto que irá ser adicionado a mais no estoque: ");
    scanf(" %d", &x);
    printf("Quantidade atual do produto: %d\n", x);
    printf("Digite a quantidade a ser adicionada: ");
    scanf(" %d", &y);
    estoque[x] = estoque[x]+y;
    Menu(estoque);
};

void ExibirEstoque(int estoque[]){
    printf("Tabela de Produtos:\n");
    for(int i;i< 10;i++){
        printf("Produto [%d] | Qtd : %d\n", i,estoque[i]);
    }
    printf("Final da Tabela\n");
}
int main(){
    int estoque[10];
    for (int i = 0; i < 10; i++) {
        estoque[i] = rand();
    }
    Menu(estoque);
}