#include <stdio.h>
#include <string.h>
/*typedef struct {
    int x;
    int y;
    } Ponto;


 int main(){
     Ponto p1;
     p1.x = 10;
     p1.y = 20;
     printf("%d %d\n",p1.x,p1.y);
}   */    

/*typedef struct {
    char titulo[100];
    char autor[100];
    int ano;
}Livro;

int main(){
    Livro livro1;
    strcpy(livro1.titulo,"Senhor dos Aneis");
    strcpy(livro1.autor,"Tolkin");
    livro1.ano = 1920;        
    printf("%s\n%s\n%d\n",livro1.titulo,livro1.autor,livro1.ano);
}*/

/*typedef struct {
    char titulo[100];
    char autor[100];
    int ano;
}Livro;

int main(){
    Livro livro1;
    Livro *p;
    p = &livro1;
    strcpy(livro1.titulo,"Senhor dos Aneis");
    strcpy(livro1.autor,"Tolkin");
    livro1.ano = 1920;        
    printf("%s\n%s\n%d\n",p->titulo,p->autor,p->ano);
}*/

