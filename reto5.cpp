#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    cout << "Ingrese un numero n impar (n>=5): ";
    cin >> n;
    if (n >= 5 && n%2 == 1) {
	    for (int i = 0; i < n; ++i) {
	        cout << "* ";
	    }
	    cout << endl;
	    int m = n - 2;
	    for (int i = 0; i < m; ++i) {
	        int esp1 = i + 1;
	        int esp2 = m - i - 1;
	        int esp3 = i * 2;
	        for (int i = 0; i < esp1; ++i) {
	            cout << " ";
	        }
    	    cout << "* ";
    	    for (int i = 0; i < esp2; ++i) {
    	        cout << "  ";
    	    }
    	    cout << "*";
    	    for (int i = 0; i < esp3; ++i) {
    	        cout << " ";
        	}
        	cout << " *";
        	cout << endl;
    	}
    	for (int i = 0; i < n - 1; ++i) {
    	    cout << " ";
    	}
    	for (int i = 0; i < n; ++i) {
        	cout << "* ";
    	}
    	cout << endl;
    }
    else {
    	cout<<"El numero es invalido ";
	}
    return 0;
}