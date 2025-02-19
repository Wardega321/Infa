#include <iostream>
using namespace std;
int main(){
	
	int board[5];
	cout << "Podaj 5 liczb calkowitych:\n";
	cout << "\n";
	for (int i = 0; i < 5; i++) {
        cin >> board[i];
    }
	for (int i = 0; i < 5; i++) {
        if (board[i] < 0) {
            board[i] = 0;  
        }
    }
 
	    cout << "Liczby ujemne zamienione na 0: ";
    for (int i = 0; i < 5; i++) {
        cout << board[i];
        if (i < 4) {
            cout << ", ";  
        }
    }
    cout << endl;
    return 0;
}