#include <iostream>
using namespace std;

void ContarCaracteres() {
    string palabra = "Programacion en C++";

    int total = palabra.size();
    int sinEspacios = 0;

    for (int i = 0; i < total; i++) {
        if (palabra[i] != ' ') {
            sinEspacios++;
        }
    }

    cout << endl;
    cout << "Texto original: " << palabra << endl;
    cout << "Cantidad total de caracteres: " << total << endl;
    cout << "Cantidad de caracteres sin espacios: " << sinEspacios << endl;
}


int main(){
    ContarCaracteres();
}