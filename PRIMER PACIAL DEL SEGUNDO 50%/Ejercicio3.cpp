#include <iostream>

using namespace std;

void citys() {

    string carPlates[6] = {"ABC123", "XYZ789", "LMN456", "JKL321", "QWE654", "TYU999"};
    float fines[6] = {250000, 180000, 300000, 450000, 200000, 120000};
    string citys[6] = {"Tunja", "Bogotá", "Yopal", "Medellín", "Cali", "Yopal"};

    string searchedCity;
    float total = 0;
    bool found = false;

    cout << "Ingrese la ciudad: ";
    getline(cin, searchedCity);

    cout << endl;
    cout << "Multas registradas en " << searchedCity << ":" << endl;

    for (int i = 0; i < 6; i++) {
        if (citys[i] == searchedCity) {
            cout << carPlates[i] << " - $" << fines[i] << endl;
            total += fines[i];
            found = true;
        }
    }

    if (found) {
        cout << "Total de multas en " << searchedCity << ": $" << total << endl;
    } else {
        cout << "No hay multas registradas en " << searchedCity << "." << endl;
    }
}

int main() {
    citys();
    return 0;
}
