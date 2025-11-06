#include <iostream>

using namespace std;

void adios(){

    string estudaintes[] = {"Maria", "Juan", "Ana"};

    cout << estudaintes[0] << '\n';
    cout << estudaintes[1] << '\n';
    cout << estudaintes[2] << '\n';
}

void adios1(){

    string estudaintes[] = {"Maria", "Juan", "Ana"};

    for(int i = 0; i < 3; i++){
        cout << estudaintes[i] << '\n';
    
}

}

void adios2(){

    string estudaintes[] = {"Maria", "Juan", "Ana", "Daniel", "Pepito"};

    int longitud = sizeof(estudaintes) / sizeof(string);

    for(int i = 0; i < longitud; i++){
        cout << estudaintes[i] << '\n';
    
}

}

void adios3(){

    char notas[] = { 'A', 'B', 'C', 'D', 'F'};

    int tamaño = sizeof(notas) / sizeof(char);

    for (int i = 0; i < tamaño; i++)
    {
        cout << notas[i] << " Notas de estudiantes" << '\n';
    }
    

}

int main(){
    //adios();
    //adios1();
    //adios2();
    adios3();

}