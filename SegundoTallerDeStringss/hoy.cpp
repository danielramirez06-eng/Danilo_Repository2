#include <iostream>
using namespace std;

//Punto #2

int contarVocales(string texto) {
    int contador = 0;
    for (int i = 0; i < texto.size(); i++) {
        char c = texto[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            contador++;
        }
    }
    return contador;
}

int contarConsonantes(string texto) {
    int contador = 0;
    for (int i = 0; i < texto.size(); i++) {
        char c = texto[i];
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            if (!(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                  c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')) {
                contador++;
            }
        }
    }
    return contador;
}

int contarNoAlfabeticos(string texto) {
    int contador = 0;
    for (int i = 0; i < texto.size(); i++) {
        char c = texto[i];
        if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))) {
            contador++;
        }
    }
    return contador;
}

void ejemplo2() {
    string palabra;
    cout << "Ingrese una palabra: ";
    cin >> palabra;

    cout << "Vocales: " << contarVocales(palabra) << endl;
    cout << "Consonantes: " << contarConsonantes(palabra) << endl;
    cout << "No alfabeticos: " << contarNoAlfabeticos(palabra) << endl;
}




//Punto #1

bool validarLongitud(string nombreUsuario) {
    return nombreUsuario.size() >= 6 && nombreUsuario.size() <= 12;
}

bool validarInicioLetra(string nombreUsuario) {
    char primera = nombreUsuario[0];
    return (primera >= 'A' && primera <= 'Z') || (primera >= 'a' && primera <= 'z');
}

bool validarSinEspacios(string nombreUsuario) {
    for (int i = 0; i < nombreUsuario.size(); i++) {
        if (nombreUsuario[i] == ' ')
            return false;
    }
    return true;
}

void problema1() {
    string hola;
    cout << "Ingresa tu nombre de usuario: ";
    cin >> hola;

    if (validarLongitud(hola) && validarInicioLetra(hola) && validarSinEspacios(hola)) {
        cout << "Tu nombre de usuario es valido" << endl;
    } else {
        cout << "Tu nombre de usuario no es valido" << endl;
    }
}

int main() {
    //problema1();
    ejemplo2();
    return 0;
}
