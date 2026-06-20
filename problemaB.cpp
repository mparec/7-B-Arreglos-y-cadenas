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
        bool es_palindromo = true;
        for (int j = 0; j < int((textos[i].length())/2); j++) {
            if (textos[i][j] != textos[i][textos[i].length() - 1 - j]) {
                es_palindromo = false;
                break;
            }
        }
        if (es_palindromo == true) {
            cout << "P" << endl;
        } else {
            cout << "NP" << endl;
        }
    }

    return 0;
}