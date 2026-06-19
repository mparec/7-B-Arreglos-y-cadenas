#include <iostream>
using namespace std;

int main(){
    int n, AUX, A[1000]; //El arreglo A tiene un tamaño constante de 1000

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < int(n/2); i++) {
        AUX = A[i];
        A[i] = A[n - 1 - i];
        A[n - 1 - i] = AUX;
    }

    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }

    return 0;
}