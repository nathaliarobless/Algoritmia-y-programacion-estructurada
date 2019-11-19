#include <stdio.h>

int main (){

// Declaracion
float K, C=0, F=0;

// Ingresar los valores
printf ("Conversion de K a C y F.\n\n");
printf ("Ingrese K:\n");
scanf ("%f",&K);
C= K-273.15;
F= ((C*9)/5)+32;

// Impresion de resultados
printf ("Conversion:\n");
printf ("C= %.2f grados\n",C);
printf ("K= %.2f grados\n",F);

    return 0;
}
