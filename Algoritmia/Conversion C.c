#include<stdio.h>

float funcion(float C){
    float F;
    F=(C*9/5)+32;
    return F;
}

float funcion2(float C){
    float K;
    K=(C-32)*5/9+273.15;
    return K;
}

int main(){

float C;
printf ("Conversion de C a F y K\n\n");
printf ("Ingrese C:\n");
scanf("%f",&C);

float x = funcion(C);
float y = funcion2(C);

printf ("Conversion:\n\n");
printf("F= %.2f\n",x);
printf("K= %.2f\n",y);
}
