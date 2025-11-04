#include <iostream>

using namespace std;


void PreciosAltosYBajos() {
    float precios[6] = {9.5, 24.5, 23.4, 12.6, 3.5, 7.3};
    float suma = 0;
    float mayor = precios[0];
    float menor = precios[0];

    cout << "Lista de precios:" << endl;

    for (int i = 0; i < 6; i++) {
        cout << "Precio " << i + 1 << ": " << precios[i] << endl;
        suma += precios[i];

        if (precios[i] > mayor)
            mayor = precios[i];

        if (precios[i] < menor)
            menor = precios[i];
    }

    cout << endl;
    cout << "Suma total de precios: " << suma << endl;
    cout << "Precio más alto: " << mayor << endl;
    cout << "Precio más bajo: " << menor << endl;
}

int main (){
    PreciosAltosYBajos();
}