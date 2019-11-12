#include<stdio.h>

float funcion(float F){
    float c;
    c=(F-32)*5/9;
    return c;
}

float funcion2(float F){
    float k;
    k=((F-32)*5/9)+273.15;
    return k;
}
int main(){

float F;

printf ("Conversion de F a C y K.\n\n");
printf ("Ingrese F:\n");

scanf("%f",&F);
funcion(F);
float c=funcion(F);
funcion2(F);
float k=funcion2(F);

printf ("Conversion:\n");
printf ("C= %.2f grados\n",c);
printf ("K= %.2f grados\n",k);
}
