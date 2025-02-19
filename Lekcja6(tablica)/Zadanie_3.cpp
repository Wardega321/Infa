#include <iostream>
using namespace std;
int main (){
	int board[10];
	cout << "Podaj 10 liczb calkowitych:\n";
for (int i = 0; i < 10; i++) {
	cout << "Podaj liczbe nr " << i+1 << ": ";
	cin >> board[i];
}
	
	int min = board[0];
	for (int i = 1; i < 5; i++) {
	if (board[i] < min) {
		min = board[i];
	}
}
	cout << "\nNajmniejsza wartosc w tablicy to: " << min << endl;
	
	return 0;
}