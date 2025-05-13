# include <stdio.h>
void Scan(){
    int num;
    scanf(" %d",&num);
    printf("Numero digitado: %d\nLocal de memoria: %d\n",num ,&num);
}
int SommadorSucessivo(int a, int b){
    if(b<= 0){
        printf("Codigo Finalizado\n");
        return 0;
    }else{
        a++;
        b--;
        printf("%d\n",a);
        return SommadorSucessivo(a,b);
    }
}
int main (){
    printf("Here go again, Hello World \n");
    Scan();
    SommadorSucessivo(0,10);
    return 0;
}

