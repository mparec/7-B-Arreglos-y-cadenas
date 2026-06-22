#include <iostream>
using namespace std;

int A[1000][1000];

int main(){
    int n;

    cin >> n;
    
    // Establecer los elementos de la matriz

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    // Girar la matriz 90° a la derecha

    for (int j = 0; j < n; j++) {
        for (int i = n - 1; i >= 0; i--) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}