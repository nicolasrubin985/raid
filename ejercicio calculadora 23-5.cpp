#include <iostream>
using namespace std;

double calcula_media(double, double);  // Declaraci�n

int main()
{
    double numero1, numero2;
    cout << "Introduzca el primer n�mero: ";
    cin >> numero1;
    cout << "Introduzca el segundo n�mero: ";
    cin >> numero2;

    double resultado = calcula_media(numero1, numero2); // Llamada
    cout << "El resultado de la Operacion de  "<< numero1 << " y " << numero2
         << " es " << resultado << ".\n";
}

// Definici�n
double calcula_media(double num1, double num2)
{
    double media;
    media = (num1+num2);
    return media;
}
