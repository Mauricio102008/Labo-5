#include <iostream>
using namespace std;

int main() {
    int  opcion;
    float radio,lado, base, altura,area;
    cout << "Ingresa un numero en base al area que quieras obtener" <<endl;
    cout << "1. CICULO   2. CUADRADO   3. TRIANGULO" <<endl;
    cin >> opcion;
    switch (opcion) {
        case 1:
            cout << "Ingresa el radio" << endl;
            cin >> radio;
            area= (radio*radio)*3.1416;
            cout <<"El area del circulo es igual a " << area <<endl;
            break;
        case 2:
            cout << "Ingresa el valor del lado" << endl;
            cin >> lado;
            area= lado*lado;
            cout <<"El area de el cuadrado es igual a " << area <<endl;
            break;
        case 3:
            cout << "Ingresa el valor de la base" << endl;
            cin >> base;
            cout << "Ingresa el valor de la altura" <<endl;
            cin >> altura;
            area= (base*altura)/2;
            cout << "El area del triangulo es " << area <<endl;
            break;
             default:
            cout << "Numero invalido." << endl;
    }

    return 0;
}