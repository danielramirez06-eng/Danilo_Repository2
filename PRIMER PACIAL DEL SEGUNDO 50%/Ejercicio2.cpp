#include <iostream>
using namespace std;

void temperature() {

    float tempMin, tempMax;
    cout << "Ingresa tu temperatura minima: ";
    cin >> tempMin;

    cout << "Ingresa tu temperatura maxima: ";
    cin >> tempMax;

    string citys[10] = {"Bogotá", "Medellín", "Cali", "Cartagena", "Pereira",
                        "Bucaramanga", "Manizales", "Tunja", "Santa Marta", "Villavicencio"};

    float temperatures[10] = {18.5, 25.1, 27.8, 31.3, 22.7, 26.2, 19.0, 16.4, 30.5, 29.0};

    int tam = sizeof(temperatures) / sizeof(float);

    float sum = 0;
    int counter = 0;

    cout << endl;
    cout << "Ciudades dentro del rango (" << tempMin << " - " << tempMax << " °C):" << endl;

    for (int i = 0; i < tam; i++) {
        if (temperatures[i] >= tempMin && temperatures[i] <= tempMax) {
            cout << citys[i] << " - " << temperatures[i] << " °C" << endl;
            sum += temperatures[i];
            counter++;
        }
    }

    if (counter > 0) {
        float average = sum / counter;
        cout << "Promedio de temperaturas dentro del rango: " << average << " °C" << endl;
    } else {
        cout << "No hay ciudades dentro de ese rango de temperatura." << endl;
    }
}

int main() {
    temperature();
    return 0;
}
