#include <iostream>
using namespace std;

class SalesManager {
public:
    bool continueRunning = true;
    int size = 0;
    string* salesNames = 0;
    int* salesValues = 0;

    // FUNCIÓN PRINCIPAL
    void run() {
        while (continueRunning) {
            int userAction = getUserAction();

            if (userAction == 1) {
                getNewSales();
            } else if (userAction == 2) {
                printSales();
            } else if (userAction == 3) {
                modifySale();
            } else if (userAction == 4) {
                findSale();
            } else if (userAction == 5) {
                salesInRange();
            } else if (userAction == 6) {
                calculateTotal();
            } else if (userAction == 7) {
                delete[] salesNames;
                delete[] salesValues;
                continueRunning = false;
            } else {
                cout << "Opcion invalida, intente de nuevo." << endl;
            }
        }
    }

    // MENÚ PRINCIPAL
    int getUserAction() {
        int userAction;
        cout << "-----------------------------" << endl;
        cout << "Por favor seleccione: " << endl;
        cout << "1. Registrar o reiniciar ventas." << endl;
        cout << "2. Mostrar todas las ventas." << endl;
        cout << "3. Modificar una venta." << endl;
        cout << "4. Buscar una venta." << endl;
        cout << "5. Mostrar ventas dentro de un rango de precios." << endl;
        cout << "6. Calcular total de ventas." << endl;
        cout << "7. Salir." << endl;
        cout << "Ingrese una opcion: ";
        cin >> userAction;
        cout << "-----------------------------" << endl;
        return userAction;
    }

    // REGISTRAR O REINICIAR VENTAS
    void getNewSales() {
        cout << "Ingrese el numero de ventas a registrar: ";
        cin >> size;

        delete[] salesNames;
        delete[] salesValues;

        salesNames = new string[size];
        salesValues = new int[size];

        for (int i = 0; i < size; i++) {
            cout << "Ingrese el nombre de la venta #" << i + 1 << ": ";
            cin >> salesNames[i];
            cout << "Ingrese el valor de la venta #" << i + 1 << ": ";
            cin >> salesValues[i];
        }
    }

    // MOSTRAR TODAS LAS VENTAS
    void printSales() {
        if (size == 0) {
            cout << "No hay ventas registradas." << endl;
            return;
        }

        cout << "Lista actual de ventas:" << endl;
        cout << "-----------------------------" << endl;
        for (int i = 0; i < size; i++) {
            cout << i + 1 << ". Venta: " << salesNames[i]
                 << " -> Valor: " << salesValues[i] << endl;
        }
    }

    // MODIFICAR UNA VENTA EXISTENTE
    void modifySale() {
        if (size == 0) {
            cout << "No hay ventas registradas." << endl;
            return;
        }

        string name;
        cout << "Ingrese el nombre de la venta que desea modificar: ";
        cin >> name;

        bool found = false;
        for (int i = 0; i < size; i++) {
            if (salesNames[i] == name) {
                cout << "Venta encontrada. Valor actual: " << salesValues[i] << endl;
                cout << "Ingrese el nuevo valor: ";
                cin >> salesValues[i];
                cout << "Venta modificada correctamente." << endl;
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "No se encontro una venta con ese nombre." << endl;
        }
    }

    // BUSCAR UNA VENTA POR NOMBRE
    void findSale() {
        if (size == 0) {
            cout << "No hay ventas registradas." << endl;
            return;
        }

        string name;
        cout << "Ingrese el nombre de la venta a buscar: ";
        cin >> name;

        bool found = false;
        for (int i = 0; i < size; i++) {
            if (salesNames[i] == name) {
                cout << "Venta encontrada en la posicion " << i + 1
                     << " -> Valor: " << salesValues[i] << endl;
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "No se encontro una venta con ese nombre." << endl;
        }
    }

    // MOSTRAR VENTAS EN UN RANGO DE PRECIOS
    void salesInRange() {
        if (size == 0) {
            cout << "No hay ventas registradas." << endl;
            return;
        }

        int min, max;
        cout << "Ingrese el valor minimo: ";
        cin >> min;
        cout << "Ingrese el valor maximo: ";
        cin >> max;

        cout << "Ventas en el rango de " << min << " a " << max << ":" << endl;
        bool found = false;

        for (int i = 0; i < size; i++) {
            if (salesValues[i] >= min && salesValues[i] <= max) {
                cout << "Venta: " << salesNames[i]
                     << " -> Valor: " << salesValues[i] << endl;
                found = true;
            }
        }

        if (!found) {
            cout << "No hay ventas dentro de ese rango." << endl;
        }
    }

    // CALCULAR TOTAL DE TODAS LAS VENTAS
    void calculateTotal() {
        if (size == 0) {
            cout << "No hay ventas registradas." << endl;
            return;
        }

        int total = 0;
        for (int i = 0; i < size; i++) {
            total += salesValues[i];
        }
        cout << "El total de las ventas registradas es: " << total << endl;
    }
};

// PUNTO DE ENTRADA
int main() {
    SalesManager manager;
    manager.run();
    return 0;
}
