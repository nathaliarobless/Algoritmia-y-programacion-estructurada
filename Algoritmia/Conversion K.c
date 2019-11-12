#include<stdio.h>

float funcion(float K){
    float F;
    F=(K-273.15)*9/5+32;
    return F;
}

float funcion2(float K){
    float C;
    C=K-273.15;
    return C;
}

int main(){

float K;
printf ("Conversion de K a C y F.\n\n");
printf ("Ingrese K:\n");
scanf("%f",&K);
funcion(K);

float F=funcion(K);
funcion2(K);
float C=funcion2(K);

printf ("Conversion:\n");
printf ("C= %.2f grados\n",C);
printf ("K= %.2f grados\n",F);
}
