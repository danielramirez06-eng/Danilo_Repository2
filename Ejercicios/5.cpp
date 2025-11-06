#include <iostream>
using namespace std;


int buscarArreglo(int arreglo[], int tam, int elemento);

void hd() {
    int numero[] = {1, 2, 3 ,4 ,5 ,6 ,7 ,8, 9, 10};
    int tam = sizeof(numero) / sizeof(int);

    int indice;
    int miNum;

    cout << "Ingresa el elemento a buscar: ";
    cin >> miNum;

    indice = buscarArreglo(numero, tam, miNum);

    if (indice != -1) {
        cout << "El numero " << miNum << " se encuentra en el indice " << indice << endl;
    } else {
        cout << "El numero " << miNum << " no esta en el arreglo" << endl;
    }
}

int buscarArreglo(int arreglo[], int tam, int elemento) {
    for (int i = 0; i < tam; i++) {
        if (arreglo[i] == elemento) {
            return i;
        }
    }
    return -1;
}

int main() {
    hd();
    return 0;
}
