#include <iostream>
// calcular un descuento sabiendo que al comprar más de 10,000 el descuento será del 25% y
// por debajo o igual de 10,000 el  descuento será de 10%, considere lo necesario.
using namespace std;

int descuento(int compra){ //funcion para realizar el descuento de la compra
    int des;
    if (compra >10000){ // si la compra es mayor a los 10,000 hará lo siguiente
        cout<<"El descuento sera del 25%"<<endl;// mandar un mensaje del descuento aplicado
        des = compra-(0.25*compra); // 0.25 por el total de la compra sera el  total de descuento, y del total de la compra restar la cantidad de descuento
        // y el resultado se guardará en la variable des
        cout<<"La cantidad total a pagar es: "<<des<<endl; // mandar el resultado con un mensaje
    }
    else if(compra <= 10000){ // pero si la compra es menor o igual a 10,000 hará lo siguiente
        cout<<"El descuento sera del 10%"<<endl; // mandar mensaje del descuento aplicado
        des = compra - (0.10*compra);// 0.10 por el total de la compra sera el  total de descuento, y del total de la compra restar la cantidad de descuento
        // y el resultado se guardará en la variable des
        cout<<"La cantidad total a pagar es: "<<des<<endl;// mandar el resultado con un mensaje
    }
    return des; // y retornará el valor de des
}

int main() {
    int compra; // variable para guardar lo ingresado por el usuario
    cout<<"\n\tDESCUENTO DE COMPRA"<<endl;
    cout<<"Ingrese la cantidad total de la compra:";// pedir la cantidad de la compra
    cin>>compra;
    descuento(compra);// lo que este en la funcion descuento será mostrado.

    return 0;
}
