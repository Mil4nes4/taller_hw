#include <iostream>
using namespace std;
int main() {
    int n;    
        cout << "Escriba un numero n impar (n>=5): ";
        cin >> n; 
    if (n >= 5 && n % 2 == 1){
    	int i, j;    
    	for(i = 1; i <= (n+1)/2; i++) {
    	    cout << "*";
    	}
    	cout << endl;
    	for(j = 1; j <= (n+1)/2 - 2; j++) {
        	for(i = 1; i <= (n+1)/2; i++) {
            	if(i > 1 && i < ((n+1)/2)) {
                	cout << " ";
            	} else {
                	cout << "*";
            	}
        	}
        	cout << endl;
    	}
    	for(i = 1; i <= n; i++) {
        	cout << "*";
    	}
    	cout << endl;
    	for(j = 1; j <= (n+1)/2 - 2; j++) {
        	for(i = 1; i <= n; i++) {
            	if(i >= 1 && i < (n+1)/2) {
                	cout << " ";
            	} else {
                	if(i > (n+1)/2 && i < n) {
                    	cout << " ";
                	} else {
                    	cout << "*";
                	}
            	}
        	}
        	cout << endl;
    	}
    	for(i = 1; i <= n; i++) {
        	if((i >= 1) && (i < (n+1)/2)) {
            	cout << " ";
        	} else {
            	cout << "*";
        	}
    }
	}
	else {
		cout<<"El numero es invalido";
	}
    return 0;
}