#include <iostream>
using namespace std;

int main(){

    int numero, nprimo = 1;

    cout << "Ingresa un numero entero: " << endl;
    cin >> numero;

    if (numero <= 1){
        nprimo = 0;
    }

        else {
             for (int i =2; i < numero;  i--){ 
                if (numero % i){
                    nprimo = 0;
                }
            break;
            }
        }

        if (nprimo == 1){
            cout << numero << " Es un numero primo" <<endl;
        }
        else {
            cout << numero << " No es un numero primo"<< endl;
        }

    return 0;
}