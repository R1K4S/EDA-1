#include <stdio.h>
#include <stdlib.h>

void Exibir(int edificio[5][10][24]);
void Media(int edificio[5][10][24]);
int Menu(int edificio[5][10][24]);

int main(){
    int edificio[5][10][24];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 10; j++) {
            for (int k = 0; k < 24; k++) {
                edificio[i][j][k] = rand() % 100;
            }
        }
    }   
    Menu(edificio);
    return 0;
}

void Exibir(int edificio[5][10][24]){
    int x,y;
    printf("Digite o andar que deseja visualizar: ");
    scanf(" %d",&x);
    printf("Digite a sala que deseja visualizar: ");
    scanf(" %d",&y);
    for(int k = 0;k < 24; k++){
        printf("No horario %d a temperatura era: %d\n",k+1, edificio[x][y][k]);
    }
}

void Media(int edificio[5][10][24]) {
    float soma = 0;
    int x;
    printf("Digite o andar que deseja visualizar: ");
    scanf(" %d",&x);
    int total = 5 * 10 * 24;
        for (int j = 0; j < 10; j++) {
            for (int k = 0; k < 24; k++) {
                soma += edificio[x][j][k];
            }
        }
    printf("Média das temperaturas: %.2f\n", soma / total);
}

int Menu(int edificio[5][10][24]){
    int op = 0;
    do {
        printf("\nEscolha:\n");
        printf("1. Exibir as salas da Temperatura\n");
        printf("2. Calcular as médias da Temperatura\n");
        printf("3. Sair\n");
        scanf(" %d", &op);

        switch (op) {
            case 1:
                Exibir(edificio);
                break;
            case 2:
                Media(edificio);
                break;
            case 3:
                return 0;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while (op != 3);
    return 0;
}


