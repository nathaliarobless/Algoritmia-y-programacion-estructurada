#include <stdio.h>

int main(){

char vocales[5]={'a','e','i','o','u'};
char palabra[10000];
int contador[5]={0},x=0,y;

printf("Ingresa la palabra:\n");
gets(palabra);

printf("\n");
while(palabra[x]!='\0'){
    for(y=0;y<5;y++)
        if(palabra[x]==vocales[y])
        contador[y]++;
        x++;
}

printf("En esta palabra hay:\n");
for(x=0;x<5;x++){
printf("%d - %c\n", contador[x],vocales[x]);
}

return 0;
}
