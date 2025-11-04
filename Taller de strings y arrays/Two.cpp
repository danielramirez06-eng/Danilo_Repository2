#include <iostream>
using namespace std;

void ContarVocalesYConsonantes() {
    string texto = "Desarrollo de Software";
    int vocales = 0, consonantes = 0;

    for (int i = 0; i < texto.size(); i++) {
        char c = texto[i];

        if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))) {
            continue;
        }

        if (c == 'a' || c == 'A' ||
            c == 'e' || c == 'E' ||
            c == 'i' || c == 'I' ||
            c == 'o' || c == 'O' ||
            c == 'u' || c == 'U') 
            {
            vocales++;
        } 
        else 
        {
            consonantes++;
        }
    }

    cout << "Texto original: " << texto << endl;
    cout << "Cantidad de vocales: " << vocales << endl;
    cout << "Cantidad de consonantes: " << consonantes << endl;
}


int main(){
    ContarVocalesYConsonantes();
}