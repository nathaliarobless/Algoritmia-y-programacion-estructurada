#include <stdio.h>

int main(){

char alfabeto[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
char palabra[10000];
int contador[26]={0},x=0,y;

printf("Ingresa la palabra:\n");
gets(palabra);

printf("\n");
while(palabra[x]!='\0'){
    for(y=0;y<26;y++)
        if(palabra[x]==alfabeto[y])
        contador[y]++;
        x++;
}

printf("En esta palabra hay:\n");
for(x=0;x<27;x++){
printf("%d - %c\n", contador[x],alfabeto[x]);
}

return 0;
}
