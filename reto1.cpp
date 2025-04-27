#include <iostream>
using namespace std;
int main() {
    int n; 
    do {
        cout << "Escriba un numero n impar (n>=3): ";
        cin >> n;
    } while((n < 3) || (n % 2 == 0));
    for(int i = 1; i <= n; i++) {
        cout << "*";
    }
    cout << endl;
        for(int i = n-2; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            cout << " ";
        }
        cout << "*" << endl;
    }
    for(int i = 1; i <= n; i++) {
        cout << "*";
    }
    return 0;
}