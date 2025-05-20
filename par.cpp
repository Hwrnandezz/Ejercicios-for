#include <iostream>
using namespace std;

int main(){

    int numero;

    cout << "Ingresa un numero entero: " << endl;
    cin >> numero;
             for (int i =0; i < numero;  i++){ 
                if (i % 2 ==0){
                    cout << i << "\n";
                }
            break;
        }

    return 0;
}