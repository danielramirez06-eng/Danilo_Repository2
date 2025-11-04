#include <iostream>
using namespace std;

void MostrarProductosYPrecios() {
    string productos[6] = {"Manzanas", "Peras", "Uvas", "Bananas", "Mangos", "Fresas"};
    float precios[6] = {1500, 2300, 1800, 3100, 2700, 2600};

    float total = 0;

    cout << "Lista de productos y sus precios:" << endl;
    for (int i = 0; i < 6; i++) {
        cout << productos[i] << " - $" << precios[i] << endl;
        total += precios[i];
    }

    cout << "\nTotal a pagar por todos los productos: $" << total << endl;

    cout << "\nProductos con precio mayor o igual a $2500:" << endl;
    for (int i = 0; i < 6; i++) {
        if (precios[i] >= 2500) {
            cout << productos[i] << " - $" << precios[i] << endl;
        }
    }
}

int main() {
    MostrarProductosYPrecios();
    return 0;
}
