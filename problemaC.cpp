#include <iostream>
using namespace std;

int A[1000]; // Todos los elementos se inicializan automaticamente en 0

int main(){
    int P, n, F;

    cin >> P >> n; // Cantidad de profesores y de alumnos

    for (int i = 0; i < n; i++) {
        cin >> F;
        A[F - 1]++;
    }

    for (int i = 0; i < P; i++) {
        cout << i + 1 << "-" << A[i] << endl;
    }

    return 0;
}