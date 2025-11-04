#include <iostream>
using namespace std;

void NombreYEdadesDePersonasMayores() {
    string nombres[5] = {"Carlos", "Marta", "Lucía", "Tomás", "Sofía"};
    int edades[5] = {20, 16, 22, 15, 19};

    cout << "Personas mayores o iguales a 18 años:\n";

    for (int i = 0; i < 5; i++) {
        if (edades[i] >= 18) {
            cout << nombres[i] << " tiene " << edades[i] << " años." << endl;
        }
    }
}

int main() {
    NombreYEdadesDePersonasMayores();
    return 0;
}
