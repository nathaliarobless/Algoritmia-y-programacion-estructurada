#include <stdio.h>

int main(){
    int n,x,i,j,aux;
    float acu=0;
    printf("Ingrese la dimension del arreglo: ");
    scanf("%d",&n);
    int arreglo[n];

printf("\nIngrese los datos del arreglo:\n");
for(x=0;x<n;x++){
    scanf("%d",&arreglo[x]);
    acu+=arreglo[x];
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

printf("\nDatos ordenados de forma ascendente:\n");
for(x=0;x<n;x++){
    printf("%d\n",arreglo[x]);
}

float media=acu/n;
printf("\nMedia: ");
printf("%.2f\n",media);

//resolver la mediana
if(n%2==1){
//es impar
    printf("\nMediana: ");
    printf("%d\n",arreglo[n/2]);
} else {
//es par
    float mediana;
    int pd=n/2;
    int pi=pd-1;
    float aux2=arreglo[pi]+arreglo[pd];
    mediana=aux2/2;
    printf("\nMediana: ");
    printf("%.2f\n",mediana);

}

return 0;
}
