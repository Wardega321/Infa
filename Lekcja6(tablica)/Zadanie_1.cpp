#include <iostream>
using namespace std;
int main(){
	
	int board[5];
	int suma = 0;    
    int srednia;  
 
    cout << "Podaj 5 liczb calkowitych:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Liczba " << i + 1 << ": ";
        cin >> board[i];
    }
 
 
    for (int i = 0; i < 5; i++) {
        suma += board[i];
    }
	srednia = suma / 5;
    cout << "Srednia liczb: " << srednia << endl;
    return 0;
}