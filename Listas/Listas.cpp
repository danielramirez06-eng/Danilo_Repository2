#include <iostream>
using namespace std;

//5


void Products() {
    string products[3] = {"Bacalao", "Leche Klim", "Queso"};
    int prices[3] = {50000, 9000, 5000};

    for (int i = 0; i < 3; i++) {
        cout << "Producto " << i + 1 << ":" << endl;
        cout << "Nombre: " << products[i] << endl;
        cout << "Precio: " << prices[i] << " pesos" << endl;
        cout << endl;
    }
}



//4

void ContarPares() {
    int values[8] = {2, 6, 7, 9, 10, 11, 16, 19};
    int contadorPares = 0;

    for (int i = 0; i < 8; i++) {
        cout << "Número " << i + 1 << ": " << values[i] << endl;

        if (values[i] % 2 == 0) {
            cout << "Es par " << endl;
            contadorPares++;
        } else {
            cout << "No es par " << endl;
        }

        cout << endl;
    }

    cout << "Cantidad total de números pares: " << contadorPares << endl;
}




//3


void highestNumber() {
    int numbers[6] = {8, 12, 5, 20, 7, 15};
    int mayor = 0;
    bool encontrado = false; 

    for (int i = 0; i < 6; i++) {
        if (numbers[i] > mayor) {
            mayor = numbers[i];
            encontrado = true; 
        }
    }

    cout << "El número más alto del arreglo es: " << mayor << endl;

    if (encontrado)
        cout << "Se encontró un nuevo número mayor durante la búsqueda." << endl;
    else
        cout << "Todos los números son iguales al primero." << endl;
}






//2
void hi () {
    float grades[5] = {4.5, 2, 3.4, 2.9, 2.5};
    float suma = 0, promedio;

    for (int i = 0; i < 5; i++) {
        suma += grades[i];
    }

    promedio = suma / 5;

    cout << "El promedio de calificaciones es: " << promedio << endl;

    
}



//1

void Employees(){
    string employees[4] = {"Daniel","Osman","Sofia", "Juan"};

  

    for (int i = 0; i < 4; i++)
    {
        cout << "Empleado: " << i + 1<< endl;
        
        cout << "Es el:  " << employees[i] << endl;
    }
    
}



int main(){
    Products();
    
    //ContarPares();
    //highestNumber();
    //hi();
    //Employees();
    return 0;
}