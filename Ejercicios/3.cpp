#include <iostream>

using namespace std;

void hd(){
    string estudiantes[] = {"Maria", "Jose","Ana"};


    for ( string hola : estudiantes)
    {
        cout << hola << '\n';
    }
    
}


void hd2(){
    int estudiantes[] = {1, 2, 3, 5, 7};


    for ( int notas : estudiantes)
    {
        cout << notas << '\n';
    }
    
}


int main (){
    //hd();
    hd2();
}