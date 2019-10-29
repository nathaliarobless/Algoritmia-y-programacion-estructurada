#include <stdio.h>

//no se puede regresar un valor a void, por lo tanto se utiliza un int
int funcion(int x){
   return ++x;
}

int main(){

int x=5;
int g=funcion(x);

printf("%d\n",x);
printf("%d\n",g);

return 0;
}
