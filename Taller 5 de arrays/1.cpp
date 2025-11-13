#include <iostream>
using namespace std;

//  MENÚ PRINCIPAL 
// Muestra las opciones disponibles y devuelve la opción elegida por el usuario.
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

//  FUNCIÓN PARA REGISTRAR O REINICIAR LAS VENTAS 
void getNewSales(string*& salesNames, int*& salesValues, int& size) {
    cout << "Ingrese el numero de ventas a registrar: ";
    cin >> size;

    // Se liberan los arreglos anteriores para evitar fugas de memoria.
    delete[] salesNames;
    delete[] salesValues;

    // Se crean nuevos arreglos con el tamaño indicado por el usuario.
    salesNames = new string[size];
    salesValues = new int[size];

    // Se llenan los arreglos con los datos de las ventas.
    for (int i = 0; i < size; i++) {
        cout << "Ingrese el nombre de la venta #" << i + 1 << ": ";
        cin >> salesNames[i];
        cout << "Ingrese el valor de la venta #" << i + 1 << ": ";
        cin >> salesValues[i];
    }
}

//  MOSTRAR TODAS LAS VENTAS REGISTRADAS 
void printSales(string salesNames[], int salesValues[], int size) {
    if (size == 0) {
        cout << "No hay ventas registradas." << endl;
        return;
    }

    cout << "Lista actual de ventas:" << endl;
    cout << "-----------------------------" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Venta: " << salesNames[i] << " -> Valor: " << salesValues[i] << endl;
    }
}

//  MODIFICAR UNA VENTA EXISTENTE 
void modifySale(string salesNames[], int salesValues[], int size) {
    if (size == 0) {
        cout << "No hay ventas registradas." << endl;
        return;
    }

    string name;
    cout << "Ingrese el nombre de la venta que desea modificar: ";
    cin >> name;

    bool found = false;

    // Se busca la venta por su nombre.
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

//  BUSCAR UNA VENTA POR NOMBRE 
void findSale(string salesNames[], int salesValues[], int size) {
    if (size == 0) {
        cout << "No hay ventas registradas." << endl;
        return;
    }

    string name;
    cout << "Ingrese el nombre de la venta a buscar: ";
    cin >> name;

    bool found = false;

    // Se recorre el arreglo buscando coincidencia exacta del nombre.
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

//  MOSTRAR VENTAS DENTRO DE UN RANGO DE PRECIOS 
void salesInRange(string salesNames[], int salesValues[], int size) {
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

    // Se listan las ventas cuyo valor esté entre el mínimo y máximo ingresado.
    for (int i = 0; i < size; i++) {
        if (salesValues[i] >= min && salesValues[i] <= max) {
            cout << "Venta: " << salesNames[i] << " -> Valor: " << salesValues[i] << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "No hay ventas dentro de ese rango." << endl;
    }
}

//  CALCULAR EL TOTAL DE TODAS LAS VENTAS 
void calculateTotal(int salesValues[], int size) {
    if (size == 0) {
        cout << "No hay ventas registradas." << endl;
        return;
    }

    int total = 0;

    // Se suman todos los valores de las ventas.
    for (int i = 0; i < size; i++) {
        total += salesValues[i];
    }
    cout << "El total de las ventas registradas es: " << total << endl;
}

//  FUNCIÓN PRINCIPAL DEL PROGRAMA
// Controla el flujo de ejecución del menú y las operaciones.
void run() {
    bool continueRunning = true;
    int size = 0;
    string* salesNames = nullptr;
    int* salesValues = nullptr;

    // Bucle principal del programa.
    while (continueRunning) {
        int userAction = getUserAction();

        // Se ejecuta la función según la opción elegida.
        if (userAction == 1) {
            getNewSales(salesNames, salesValues, size);
        } else if (userAction == 2) {
            printSales(salesNames, salesValues, size);
        } else if (userAction == 3) {
            modifySale(salesNames, salesValues, size);
        } else if (userAction == 4) {
            findSale(salesNames, salesValues, size);
        } else if (userAction == 5) {
            salesInRange(salesNames, salesValues, size);
        } else if (userAction == 6) {
            calculateTotal(salesValues, size);
        } else if (userAction == 7) {
            // Se liberan los arreglos y termina el programa.
            delete[] salesNames;
            delete[] salesValues;
            continueRunning = false;
        } else {
            cout << "Opcion invalida, intente de nuevo." << endl;
        }
    }
}

//  PUNTO DE ENTRADA
int main() {
    run();  // Llama a la función principal que gestiona todo el sistema.
    return 0;
}
