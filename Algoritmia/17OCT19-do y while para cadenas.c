#include <stdio.h>

int main(){

char aux2[350];
int i=0;

do{
    printf("Ingresa un caracter %d:\n ",i);
    scanf("%s",&aux2[i]);
    i++;
} while(aux2[i-1]!='0');
aux2[i]='\0';
printf("%c",aux2[1]);

return 0;
}
