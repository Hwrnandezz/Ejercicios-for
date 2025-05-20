#include <iostream>
using namespace std;

int main(){

    int numero, primo = 1;

    cout << "Ingresa un numero entero: " << endl;
    cin >> numero;

    if (numero <= 1){
        primo = 0;
    }

        else {
             for (int i =2; i < numero;  i++){ 
                if (numero % i){
                    primo = 0;
                }
            break;
            }
        }

        if (primo == 1){
            cout << numero << " Es un numero primo" <<endl;
        }
        else {
            cout << numero << " No es un numero primo"<< endl;
        }

    return 0;
}