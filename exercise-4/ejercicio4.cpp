#include <iostream>

using namespace std;

int main(){

    int a[3], M, m, medio;
    for( int i = 0 ; i<3 ; i++)
    {
        cout << "Ingresa el " << i+1 << " valor " << endl;
        cin >> a[i];
    }

    m=a[0];
    M=a[0];

    for (int i=0 ; i<3 ; i++){
        if (a[i]>M){
            M=a[i];
        }
        if (a[i]<m){
            m=a[i];
        }
    }

    for (int i = 0 ; i < 3 ; i++){
        if(a[i] != m && a[i] != M){
            medio=a[i];
        }
    }

    cout << "El numero del medio es: " << medio;

    return 0;
}