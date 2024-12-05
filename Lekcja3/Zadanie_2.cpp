#include <iostream>
using namespace std;
int main(){
	
	int C;
	cout << "Podaj temperature w stopniach Celsjusza: ";
	cin >> C;
	
	char T;
	cout << "Wybierz jednostke docelowa (K - Kelvin, F - Fahrenheit): ";
	cin >> T;
	
	float J;
	
	switch(T) {
		case 'K':
			J = C + 273.15;
		cout << "Temperatura w stopniach Kelvina : " << J << endl;
		break;
		
		case 'F':
			J = (C * 9 / 5) + 32;
		cout << "Temperatura w stopniach Fahrenheita : " << J << endl;
		break;
		
		default:
			cout << "Nie ma takiej jednostki" << endl;
	}
	
	
	
	
	
	
    return 0;
}