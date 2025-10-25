#include <iostream>
using namespace std;

int main(){
    float num[3],M=0,m=10000000000;

    cout << "Ingrese el primer numero:  " << endl;
    cin >> num[0];
    cout << "Ingrese el segundo numero:  " << endl;
    cin >> num[1];
    cout << "Ingrese el tercer numero:  " << endl;
    cin >> num[2];

    for(int i=0 ; i<3; i++)
    {
        if (num[i]>M)
        {
            M=num[i];
        }
        if (num[i]<m)
        {
            m=num[i];
        }
    }

    cout << "La suma es:  " << num[0] + num[1] + num[2] << endl;
    cout << "El promedio es:  " << (num[0] + num[1] + num[2]) / 3 << endl;
    cout << "El producto es:  " << num[0] * num[1] * num[2] << endl;
    cout << "El mas pequeño:  " << m << endl;
    cout << "El mas grande:  " << M << endl;

    return 0;
}