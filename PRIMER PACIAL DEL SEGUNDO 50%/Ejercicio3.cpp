##include <iostream>
using namespace std;

void MultasCiudad() {

    string placas[] = {"ABC123", "XYZ789", "LMN456", "JKL321", "QWE654", "TYU999"};
    float multas[] = {250000, 180000, 300000, 450000, 200000, 120000};
    string ciudades[] = {"Tunja", "Bogotá", "Yopal", "Medellín", "Cali", "Yopal"};

    int cantidad = sizeof(ciudades) / sizeof(ciudades[0]); 
    string buscar;
    float total = 0;
    bool existe = false;

    cout << "Ingrese la ciudad: ";
    getline(cin, buscar);

    cout << endl << "Multas registradas en " << buscar << ":" << endl;

    for (int i = 0; i < cantidad; i++) {
        if (ciudades[i] == buscar) {
            cout << placas[i] << " - $" << multas[i] << endl;
            total += multas[i];
            existe = true;
        }
    }

    if (existe) {
        cout << "Total de multas en " << buscar << ": $" << total << endl;
    } else {
        cout << "No hay multas registradas en " << buscar << "." << endl;
    }
}

int main() {
    MultasCiudad();
    return 0;
}

