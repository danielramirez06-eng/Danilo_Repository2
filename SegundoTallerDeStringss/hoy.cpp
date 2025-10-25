#include <iostream>
using namespace std;


//Punto #3

int contarGuiones(string codigoProducto){
    int contador = 0;
    for( int i = 0; i < codigoProducto.size(); i++)
    {
       if (codigoProducto[i] == '-')
       {
        contador++;
      }
    }
      
      
        return contador;
      

    
    
}

int contarDigitos (string codigoProducto){
    int contador = 0;
    for(int i = 0; i < codigoProducto.size(); i++)
    {
        if (codigoProducto[i] >= '0' && codigoProducto[i] <='9')
        {
            contador ++;

        }
        else
        {
            return contador;
        }
        
           
        
    }
    
}

bool validarUltimaMayuscula (string codigoProducto){
    char ultima = codigoProducto.size() - 1;

    if(codigoProducto[ultima] >= 'A' && codigoProducto[ultima] <= 'z'){
        return true;
    }
    else
    {
        return false;
    }

}

void ejemplo3 (){
    string hola;
    cout << "Intresa tu codigo" << endl;
    cin >> hola;

    cout << "Cantidad de guiones (-) = " << contarGuiones(hola) << endl;
    cout << "Cantidad digitos (1,2,3,4,5,6,7,8,9) = " << contarDigitos(hola) << endl;

    if (validarUltimaMayuscula(hola)){
        cout << "El codigo si termina en mayuscula." << endl;
        
    }
    else
    {
        cout << "El codigo no cumple con la condicion de la ultima letra en mayuscula." << endl;
    }


}


//Punto #2

int contarVocales(string texto) {
    int contador = 0;
    for (int i = 0; i < texto.size(); i++) 
    {
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
    for (int i = 0; i < texto.size(); i++) 
    {
        char c = texto[i];
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
         {
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
    for (int i = 0; i < texto.size(); i++) 
    {
        char c = texto[i];
        if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))) 
        {
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
    //ejemplo2();
    ejemplo3();
    return 0;
}
