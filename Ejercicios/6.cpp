#include <iostream>
using namespace std;

void clasificar() {
    int arreglo[] = {10, 1, 9, 2, 8, 3, 7, 4, 6, 5};
    int tam = sizeof(arreglo) / sizeof(int);
    int aux;

    
    for (int i = 0; i < tam - 1; i++) {
        for (int j = 0; j < tam - i - 1; j++) {
            if (arreglo[j] > arreglo[j + 1]) {
                aux = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = aux;
            }
        }
    }

    cout << "Arreglo ordenado: " << endl;
    for (int i = 0; i < tam; i++) {
        cout << arreglo[i] << " ";
    }

    cout << endl;
}

int main() {
    clasificar();
    return 0;
}
