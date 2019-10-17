#include <stdio.h>

int main(){

int arreglo[6];
int x,y=0;

//inicializar
for(x=0; x<6; x++){
    arreglo[x]=x*3;
    printf("%d\n",arreglo[x]);
}

return 0;
}
