#include <iostream>
using namespace std;

int A[1000000];

int main(){
    int n, c, v; // cantidad de vasos, cantidad de canicas y canicas en cada vaso

    cin >> n >> c;

    if (n < 1 || n > 1000000 || c < 1 || c > 1000000){
        return 0;
    }

    for (int i = 0; i < n; i++) {
        A[i] = 0; // Rellenar valores vacios con el valor 0
    }

    for (int i = 0; i < c; i++) {
        cin >> v; // Establecer cantidad "c" de canicas en cada vaso
        A[v - 1]++;
    }

    for (int i = 0; i < n; i++) {
        cout << A[i] << endl;
    }

    return 0;
}