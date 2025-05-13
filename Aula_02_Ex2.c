#include <stdio.h>
int Menu(int cadeiras[][20]);
void Exibir(int cadeiras[][20]);
void Reserva(int cadeiras[][20]);

int main(){
    int cadeiras[15][20] = {{0}};
    Menu(cadeiras);   
}

int Menu(int cadeiras[][20]){
    int opc;
    printf("Cinema\nEscolha seguintes opçoes:\nExibir assentos: 1\nReserva: 2\nSair: 3\n");
    scanf(" %d", &opc);
    switch (opc)
    {
    case 1 :{
        Exibir(cadeiras);
        break;
    }
    case 2:{
        Reserva(cadeiras);
        break;
    }
    case 3:{
        return 0;
    }
    default:
        break;
    }
    return 1;
}

void Exibir(int cadeiras[][20]){
    printf("Cinema:\n");
    for(int i = 0;i<15;i++){
        for (int j = 0; j < 20; j++)
        {
            printf(" %d ", cadeiras[i][j]);
        }
        printf("\n");
    }
    Menu(cadeiras);
}

void Reserva(int cadeiras[][20]){
    int x;
    int y;
    printf("- Reservar Cadeiras\n");
    printf("Digite a linha da Cadeira: que deseja reservar\n");
    scanf(" %d",&x);
    printf("Digite a coluna da Cadeira: que deseja reservar\n");
    scanf(" %d",&y);
    if(cadeiras[x][y] == 0){
        printf("A sua Cadeira %d-%d foi reservada\n", x,y);
        cadeiras[x][y] = 1;
        Menu(cadeiras);
    }else{
        printf("Sua Cadeira ja está reservada,por favor tentar outra,voltando pro menu\n");
        Menu(cadeiras);
    }
}