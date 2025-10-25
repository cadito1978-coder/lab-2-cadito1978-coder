#include <iostream>
#include <string>
using namespace std;

int main(){

    string a;
    int b[3];
    cout << "Ingrese el numero para dividirlo en digitos " << endl;
    cin >> a;

    for (int i=0; i<a.length();i++)
    {
        cout << a[i] << " ";
    }
    
    cout << endl << "Ingresa 3 numeros " << endl;
    cin >> b[0] >> b[1] >> b[2];
    cout << "Juntamos los numeros " << endl;
    for(int i = 0 ; i<3 ; i++)
    {
        cout << b[i];
    }

    return 0;
}