#include <stdio.h>
#include <string.h>
int CompareString(char a[], int t, int p){
    if (t == 0) return 1;
    if (a[t-1] != a[p]) return 0;
    return CompareString(a, t-1, p + 1);
}
int main(){
    char a[] = "ata";
    int t = strlen(a);
    if (CompareString(a, t ,0)) {
        printf("A string é palindromo.\n");
    } else {
        printf("A string nao é palindromo.\n");
    }
}