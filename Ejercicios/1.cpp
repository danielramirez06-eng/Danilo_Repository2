#include <iostream>

using namespace std;

void hola(){
    double numero = 2.5;

    string nombre = "Daniel";
    cout << sizeof(numero) << '\n';
}

void hola2(){
    char nota = 'F';
    bool estudiante = true;

    cout << sizeof(nota) << endl;
}

void hola3(){
    char calificaciones[] = { 'a', 'b', 'c', 'd', 'f' };
    cout << sizeof(calificaciones) << endl;
}

void hola4(){
    //char calificaciones[] = { 'a', 'b', 'c', 'd', 'f' };
    //cout << sizeof(calificaciones)/sizeof(calificaciones[0]) << endl;

    char calificaciones[] = { 'a', 'b', 'c', 'd', 'f', 'e' };
    cout << sizeof(calificaciones)/sizeof(char) << endl;
}

void hola5(){
    string estudiantes []{ "Estudiante_1", "Estudiante_2", "Estudiante_3"};
    cout << sizeof(estudiantes)/sizeof(string) << " estudiantes" << endl;
}


int main(){
    //hola();
    //hola2();
    //hola3();
    //hola4();
    hola5();
}