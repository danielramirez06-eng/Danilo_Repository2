#include <iostream>
using namespace std;

//1

void Employees(){
    string employees[4] = {"Daniel","Osman","Sofia", "Juan"};

  

    for (int i = 0; i < 4; i++)
    {
        cout << "Empleado: " << i + 1<< endl;
        
        cout << "Es el:  " << employees[i] << endl;
    }
    
}


//2


void PromedioCalificaciones() {
    float grades[5] = {3.5, 4.0, 2.8, 3.9, 4.2};
    float suma = 0;
    float promedio = 0;

    for (int i = 0; i < 5; i++) {
        cout << "Estudiante " << i + 1 << ": ";
        cout << "Calificación = " << grades[i] << endl;

        suma += grades[i];
    }

    promedio = suma / 5;

    cout << endl;
    cout << "El promedio de calificaciones es: " << promedio << endl;
}






//3

void ValorMaximo() {
    int numbers[6] = {8, 12, 7, 20, 12, 23};
    int maximo = 0;

    for (int i = 0; i < 6; i++) {
        if (numbers[i] > maximo) {
            maximo = numbers[i];
        }
    }

    cout << "El valor máximo en el arreglo es: " << maximo << endl;
}




//4

void ContarPares() {
    int values[8] = {2, 5, 7, 8, 10, 13, 16, 19};
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





//5
void Productos() {
    string products[3] = {"Huevos", "Leche", "Queso"};
    float prices[3] = {20000, 31000, 42800};

    for (int i = 0; i < 3; i++) {
        cout << "Producto " << i + 1 << ":" << endl;
        cout << "Nombre: " << products[i] << endl;
        cout << "Precio: " << prices[i] << " pesos" << endl;
        cout << endl;
    }
}

int main() {
    Employees();
    //PromedioCalificaciones();
    //ValorMaximo();
    //ContarPares()
    //Productos();
    return 0;
}
