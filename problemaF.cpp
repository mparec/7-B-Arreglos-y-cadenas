#include <iostream>
#include <string>
using namespace std;

//posible funcion

int main() {

    string orig_text;
    string solo_letras = "";
    string modif_text = "";
    
    getline(cin, orig_text); // Se usa getline para incluir los espacios

    for (int i = 0; i < orig_text.length(); i++) {
        if (orig_text[i] != ',' && orig_text[i] != ' ') {
            solo_letras += orig_text[i];
        }
    }

    for (int i = 0; i < solo_letras.length() - 1; i++) { // i puede acceder al primer y al penultimo elemento
        for (int j = i + 1; j < solo_letras.length(); j++) { // j puede acceder al segundo y al ultimo elemento
            if (solo_letras[i] > solo_letras[j]) {
                char aux = solo_letras[i];
                solo_letras[i] = solo_letras[j];
                solo_letras[j] = aux;
            }
        }
    }

    int ind = 0; // Una variable externa que crece a razon de 1 cuando se cumple una condicion
    for (int i = 0; i < orig_text.length(); i++) {
        if (orig_text[i] == ',' || orig_text[i] == ' ') {
                modif_text += orig_text[i];
        } else {
            modif_text += solo_letras[ind];
            ind++;
        }
    }
    
    cout << modif_text;

    return 0;
}