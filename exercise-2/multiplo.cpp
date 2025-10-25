#include <iostream>

using namespace std;

int main(){

    int a,b,c;
    cout << "Ingresa 2 numeros: ";
    cin >> a >> b;

    if (a%b==0){
        cout << "El " << a <<" es multiplo de "<< b;
    }
    else 
    {
        cout << "El " << a <<" no es multiplo de "<< b;
    }

    cout << endl << "Ahora ingresa un numero para saber si es par o no: ";
    cin >> c;

    if(c%2==0)
    {
        cout<< "Par";
    }
    else
    {
        cout << "Impar";
    }

    return 0;
}