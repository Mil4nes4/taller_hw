#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    cout << "Ingrese un numero n impar (n>=5): ";
    cin >> n;
    if (n >= 5 && n % 2 == 1) {
        int m = (n - 1) / 2;       
        for (int l = 0; l < m; ++l) {
            int ast1 = m - l + 1;
            int esp2 = m - 1 - l;
            int ast2 = l + 1;            
            for (int i = 0; i < l; ++i) {
                cout << " ";
            }
            for (int i = 0; i < ast1; ++i) {
                cout << "*";
            }
            for (int i = 0; i < esp2; ++i) {
                cout << " ";
            }
            for (int i = 0; i < ast2; ++i) {
                cout << "*";
            }
            cout << endl;
        }
        for (int i = 0; i < n; ++i) {
            cout << "*";
        }
        cout << endl;
                for (int l = 0; l < m; ++l) {
            int ast1 = m - l;
            int ast2 = m + l - 1;
                        for (int i = 0; i < ast1; ++i) {
                cout << "*";
            }
                        for (int i = 0; i < l; ++i) {
                cout << " ";
            }
                        for (int i = 0; i < ast2; ++i) {
                cout << "*";
            }
            cout << endl;
        }
    } else {
        cout << "El numero es invalido" << endl;
    }
    return 0;
}