#include <stdio.h>
#include <string.h>
int CompareString(char a[],char b[], int t){
    if (t == 0) return 1;
    if (a[t-1] != b[t-1]) return 0;
    return CompareString(a, b, t-1);
}
int main(){
    char a[] = "";
    char b[] = "";
    int t = strlen(a);
    CompareString(a,b,t);
    if (CompareString(a, b, t)) {
        printf("As strings são iguais.\n");
    } else {
        printf("As strings são diferentes.\n");
    }
}