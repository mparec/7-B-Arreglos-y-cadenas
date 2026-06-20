#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int n;
     
    cin >> n;

    const int arr_size = n;

    string textos[arr_size];

    for (int i = 0; i < n; i++) {
        cin >> textos[i];
    }

    for (int i = 0; i < n; i++) {
        int coincidencias = 0;
        for (int j = 0; j < int((textos[i].length())/2); j++) {
            if (textos[i][j] == textos[i][textos[i].length() - 1 - j]) {
                coincidencias++;
            }
        }
        if (int((textos[i].length())/2) == coincidencias) {
            cout << "P" << endl;
        } else {
            cout << "NP" << endl;
        }
    }

    return 0;
}