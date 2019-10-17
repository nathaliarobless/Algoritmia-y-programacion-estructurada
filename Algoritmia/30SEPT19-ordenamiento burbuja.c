#include <stdio.h>

int main(){
    int n,x,i,j,aux;
    printf("Ingrese la dimension del arreglo: ");
    scanf("%d",&n);
    int arreglo[n];

printf("\nIngrese los numeros del arreglo:\n");
for(x=0;x<n;x++){
    scanf("%d",&arreglo[x]);
}

for(i=1;i<n;i++){
    for(j=0;j<n-1;j++){
        if(arreglo[j]>arreglo[j+1]){
            int aux=arreglo[j];
            arreglo[j]=arreglo[j+1];
            arreglo[j+1]=aux;
        }
    }
}

printf("\nNumeros ordenados de forma ascendente:\n");
for(x=0;x<n;x++){
    printf("%d\n",arreglo[x]);
}

return 0;
}
