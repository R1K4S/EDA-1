#include<stdio.h>
int main( )
{
    int c=0,s=0,n=0,t=0;
    FILE *fp;
    char ch;
    fp = fopen ("Aula07.TXT", "r" );
    while ((ch = fgetc(fp)) != EOF) {  // Read characters until EOF
        if (ch == ' ') {
            s++;   
        } else if (ch == '\n') {
            n++;
        } else if(ch == '\t'){
            t++;
        }
        else {
            c++;
        }
        printf("%c", ch);  // Print each character (optional)
    }
    fclose ( fp );
    printf("\n");
    printf("%d\n",c);
    printf("%d\n",t);
    printf("%d\n",s);
    printf("%d\n",n);
    return 0;
}
