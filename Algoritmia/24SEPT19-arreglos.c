#include <stdio.h>

int main(){

int arreglo[6];
int x,y;

//inicializar
for(x=0; x<6; x++){
    arreglo[x]=x*3;
}

//mostrar los valores
for(y=0; y<6; y++){
    printf("%d\n",arreglo[y]);
}

return 0;
}
