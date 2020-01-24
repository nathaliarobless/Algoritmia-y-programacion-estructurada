#include <string.h>
#include <iostream>

using namespace std;

struct cliente{
char nombre[25];
char direccion[25];
char ciudad[20];
char provincia[20];

long int cp;
double saldo;
};

int main(){

struct cliente c1[5];

c1[0].nombre;
c1[0].direccion;
c1[0].ciudad;
c1[0].provincia;

c1[1].nombre;
c1[1].direccion;
c1[1].ciudad;
c1[1].provincia;

c1[2].nombre;
c1[2].direccion;
c1[2].ciudad;
c1[2].provincia;

c1[3].nombre;
c1[3].direccion;
c1[3].ciudad;
c1[3].provincia;

c1[4].nombre;
c1[4].direccion;
c1[4].ciudad;
c1[4].provincia;

struct cliente arreglo[5];

//Ingresar datos
cout<<"Ingrese el nombre del cliente"<<endl;
for(int c=0;c<5;c++){
    cin>>arreglo[c].nombre;
}

cout<<"\nIngrese la direccion del cliente"<<endl;
for(int c=0;c<5;c++){
    cin>>arreglo[c].direccion;
}

cout<<"\nIngrese la ciudad del cliente"<<endl;
for(int c=0;c<5;c++){
    cin>>arreglo[c].ciudad;
}

cout<<"\nIngrese la provincia del cliente"<<endl;
for(int c=0;c<5;c++){
    cin>>arreglo[c].provincia;
}

cout<<"\n"<<endl;

//Impresion datos
for(int c=0;c<5;c++){
        cout<<"\nCliente "<<c+1<<endl;
        cout<<"Nombre: "<<arreglo[c].nombre<<endl;
        cout<<"Domicilio: "<<arreglo[c].direccion<<endl;
        cout<<"Ciudad: "<<arreglo[c].ciudad<<endl;
        cout<<"Provincia: "<<arreglo[c].provincia<<endl;
    }


return 0;
}
