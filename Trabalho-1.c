#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Tabela
{
    int id;
    int idade;
    char nome[79];
    char telefone[19];
} Tabela;

void CriarAgenda(int pos, int criaId, int idade, char nome[], char telefone[], Tabela *ptr)
{
    int i;
    ptr[pos].id = criaId;
    ptr[pos].idade = idade;
    for (i = 0; nome[i] != '\0'; i++)
    {
        ptr[pos].nome[i] = nome[i];
    }
    ptr[pos].nome[i] = '\0';

    for (i = 0; telefone[i] != '\0'; i++)
    {
        ptr[pos].telefone[i] = telefone[i];
    }
    ptr[pos].telefone[i] = '\0';
    printf("Contato Criado\n\n");
}
void BuscarContato(Tabela *ptr, int pos)
{
    int i = 0;
    int id = 0;
    printf("Digite o Id a ser buscado:");
    scanf(" %d", &id);
    while (i < pos)
    {
        if (ptr[i].id == id)
        {
            printf("Contato achado:\n", ptr[i].id);
            printf("Id: %d ", ptr[i].id);
            printf("Nome: %s ", ptr[i].nome);
            printf("Telefone: %s ", ptr[i].telefone);
            printf("Idade: %d\n", ptr[i].idade);
            return;
        }
        else
        {
            i++;
        }
    }
    printf("Contato não achado\n\n");
}
void MostrarAgenda(Tabela *ptr, int pos)
{
    int i = 0;
    while (i < pos)
    {
        printf("Id: %d ", ptr[i].id);
        printf("Nome: %s ", ptr[i].nome);
        printf("Telefone: %s ", ptr[i].telefone);
        printf("Idade: %d\n", ptr[i].idade);
        i++;
    }
}
void RemoverContato(Tabela *ptr, int pos)
{
    int i = 0;
    int id = 0;
    Tabela troca = ptr[pos - 1];
    printf("Digite o Id a ser removido:");
    scanf(" %d", &id);
    while (i < pos)
    {
        if (ptr[i].id == id)
        {
            ptr[i] = troca;
            memset(&ptr[pos - 1], 0, sizeof(Tabela));
        }
        else
        {
            i++;
        }
    }
    printf("Contato não achado\n\n");
}
void SalvarAgenda(Tabela *ptr, int tamanho, const char *nomeArq)
{
    FILE *arquivo = fopen(nomeArq, "w");
    if (!arquivo)
    {
        printf("\n");
    }
    else
    {
        for (int i = 0; i < tamanho; i++)
        {
            fprintf(arquivo, "Id: %d\n Nome: %s\n Idade: %d\n Telefone: %s\n\n", ptr[i].id, ptr[i].nome, ptr[i].idade, ptr[i].telefone);
        }
        fclose(arquivo);
        printf("Arquivo Salvo em %s\n", nomeArq);
    }
    printf("Salvar Agenda\n");
}

int main()
{
    int tamanho;
    int pos = 0;
    int opcao = -1;
    int id = 0;
    int criaId = 0;
    int idade;
    char nome[79];
    char telefone[19];

    printf("Escolha o tamanho da Agenda:");
    scanf(" %d", &tamanho);
    Tabela *ptr = (Tabela *)malloc(sizeof(Tabela) * tamanho);

    while (opcao != 0)
    {
        printf("0.Finalizar Programa\n");
        printf("1.Criar Agenda\n");
        printf("2.Buscar Contato\n");
        printf("3.Remove Contato\n");
        printf("4.Salvar Agenda\n");
        printf("5.Mostrar Agenda\n");
        printf("Escoha as opções: \n");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 0:
            printf("Programa Finalizado\n");
            return 0;
        case 1:
            if (tamanho <= pos)
            {
                printf("Agenda sem espaço para mais contato\n");
                break;
            }
            else
            {
                printf("Digite o nome do Contato:");
                scanf(" %s", &nome);
                printf("Digite o telefone do Contato:");
                scanf(" %s", &telefone);
                printf("Digite a idade do Contato:");
                scanf(" %d", &idade);
                CriarAgenda(pos, criaId, idade, nome, telefone, ptr);
                pos++;
                criaId++;
            }
            break;
        case 2:
            BuscarContato(ptr, pos);
            break;
        case 3:
            RemoverContato(ptr, pos);
            pos--;
            break;
        case 4:
            SalvarAgenda(ptr, tamanho, "agenda.txt");
            free(ptr);
            break;
        case 5:
            MostrarAgenda(ptr, pos);
            break;
        default:
            printf("Entrada inválida");
            break;
        }
    }
}