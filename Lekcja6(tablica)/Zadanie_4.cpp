#include <iostream>
using namespace std;
int main () {
	
	int board[10];
	int suma = 0;
	for (int i = 0; i < 10; i++) {
	cout << "Podaj liczbe nr " << i+1 << ": ";
	cin >> board[i];
}
	 cout << "Liczby parzyste: ";
    bool N = true;  
    for (int i = 0; i < 10; i++) {
        if (board[i] % 2 == 0) { 
            if (!N) {
                cout << ", "; 
            }
            cout << board[i];  
            suma += board[i];  
            N = false; 
        }
    }

    cout << endl;  
    cout << "Suma liczb parzystych: " << suma << endl;  
	return 0;
}