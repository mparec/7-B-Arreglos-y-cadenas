#include <iostream>
using namespace std;

int main(){
    int n, AUX;

    cin >> n;

    int A[n];

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