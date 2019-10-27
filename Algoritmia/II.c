#include <stdio.h>

int main(){

int arreglo[2][2],i,j;

printf("Para una matriz de 2x2");
for(i=0;i<2;i++){
    printf("\nIngrese renglon %d:\n",i+1);
    for(j=0;j<2;j++){
        scanf("%d",&arreglo[i][j]);
    }
}

printf("\nLa primera columna es:\n ");
for(i=0;i<2;i++){
    printf("%d ",arreglo[i][0]);
}

return 0;
}
