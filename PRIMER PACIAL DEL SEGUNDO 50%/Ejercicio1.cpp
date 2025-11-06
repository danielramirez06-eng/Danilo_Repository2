#include <iostream>
using namespace std;

string LongestWord(string phrase, int &amount);

void hd() {
    string phrase;
    cout << "Ingresa una frase: ";
    getline(cin, phrase);

    int amount = 0;
    string longer = LongestWord(phrase, amount);

    cout << endl;
    cout << "Cantidad de palabras: " << amount << endl;
    cout << "Palabra mas larga: " << longer << endl;
}

string LongestWord(string phrase, int &amount) {
    string word = "", longer = "";

    for (int i = 0; i <= phrase.size(); i++) {
        if (phrase[i] != ' ' && phrase[i] != '\0') {
            word += phrase[i];
        } else if (word != "") {
            amount++;
            if (word.size() > longer.size()) {
                longer = word;
            }
            word = "";
        }
    }

    return longer;
}

int main() {
    hd();
    return 0;
}
