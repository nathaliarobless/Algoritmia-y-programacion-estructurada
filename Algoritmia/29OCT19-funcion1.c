#include <stdio.h>

void funcion(int x){
    x++;
    printf("%d\n",x);
}

int main(){

int x=9;
funcion(x);
printf("%d\n",x);


return 0;
}
