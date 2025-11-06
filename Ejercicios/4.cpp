#include <iostream>

using namespace std;

double obtenerTotal(double precios[], int num);

void hg(){
    double precios [] = {52.99, 12.902, 123.412, 412.45};
    int num = sizeof(precios)/sizeof(precios[0]);
    double total = obtenerTotal(precios, num);

    cout << "Total: $" << total << endl;
    

}

double obtenerTotal(double precios[], int num){
    double total = 0;
    
    for (int i = 0; i < num; i++)
    {
        //total = total + precios[i];
        total += precios[i];
    }
    return total;
}






int main(){
    hg();
    return 0;

}