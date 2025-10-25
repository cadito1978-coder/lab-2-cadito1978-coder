#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int num[6] = { 0, 1, 2, 3, 4 , 5 };
    cout<< "***********" << endl << "x  f(x)" << endl << "***********" << endl;

    for (int i = 0 ; i < 6 ; i++)
    {
        cout << num[i] << "  " << pow(num[i], 3) - pow(num[i], 2) + 5 << endl;
    }
    cout<< "***********";
}