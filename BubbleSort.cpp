#include <iostream>
using namespace std;

int a[20];
int n;

void input(){
    while (true) 
    {
        cout << "Masukkan panjang array : ";
        cin >> n;

        if (n<= 20) {
            break;
        }
        else {
            cout << "Error : Maksimal input array adalah 20\n";

        }
    }

    cout << endl;
    cout << "======================"<< endl;
    cout << "Masukkan elemen array" << endl;
    cout << "======================"<< endl;

}