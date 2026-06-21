#include <iostream>
using namespace std;

int main(){
    int P, n, F;

    int A[1000];

    cin >> P >> n; // Cantidad de profesores y de alumnos

    for (int i = 0; i < P; i++) {
        A[i] = 0; // Establecer valor 0 en lugar de valor vacio
    }

    for (int i = 0; i < n; i++) {
        cin >> F;
        A[F - 1]++;
    }

    for (int i = 0; i < P; i++) {
        cout << i + 1 << "-" << A[i] << endl;
    }

    return 0;
}