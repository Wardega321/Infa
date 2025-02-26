#include <iostream>
using namespace std;
int main() {
	
    int board[3][3]; 
    int all = 0;

    cout << "Podaj 9 liczb calkowitych do macierzy 3x3:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Podaj liczbe dla wiersza " << i+1 << ", kolumny " << j+1 << ": ";
            cin >> board[i][j];
            all += board[i][j]; 
        }
    }
	
	double half = all / 9.0;
	cout << "Srednia liczb: " << half << endl;
	
	return 0;
}