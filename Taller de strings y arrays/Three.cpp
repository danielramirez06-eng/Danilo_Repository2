#include <iostream>

using namespace std;

void MostrarEdadesYPromedio() {
    int edades[6] = {18, 21, 25, 30, 27, 22};
    int suma = 0;
    float promedio;

    cout << "Lista de edades:" << endl;

    for (int i = 0; i < 6; i++) {
        cout << "Edad " << i + 1 << ": " << edades[i] << endl;
        suma += edades[i];
    }

    promedio = (float)suma / 6;

    cout << endl;
    cout << "Suma total de edades: " << suma << endl;
    cout << "Edad promedio: " << promedio << endl;
}


int main (){
    MostrarEdadesYPromedio();
}