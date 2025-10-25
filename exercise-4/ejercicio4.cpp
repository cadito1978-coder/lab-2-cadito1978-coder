#include <iostream>

using namespace std;

int main(){

    int a[3],M=0,m=1000000;
    for( int i = 0 ; i<3 ; i++)
    {
        cout << "Ingresa el " << i+1 << " valor " << endl;
        cin >> a[i];
    }

    for (int i=0 ; i<3 ; i++)
    {
        if (a[i]>M)
        {
            M=i;
        }
        if (a[i]<m)
        {
            m=i;
        }
    }
    cout<< m << M;
    if (M+m == 1)
    {
        cout << "El numero de en medio es " << a[2];
    }
    if (M+m == 2)
    {
        cout << "El numero de en medio es " << a[1];
    }
    if(M+m==3) 
    {
        cout << "El numero de en medio es " << a[0];
    }

}