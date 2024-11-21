#include <iostream>
using namespace std;
int main(){
	
	int l1;
	cout  << "Podaj pierwsza liczbe (calkowita): ";
	cin >> l1;
	
	int l2;
	cout  << "Podaj druga liczbe (calkowita): ";
	cin >> l2;
	
	char znak;
	cout << "Podaj znak dzialania (+, -, *, /): ";
	cin >> znak;
	
	int wynik;
	
	switch(znak) {
		case '+' :
			wynik = l1 + l2;
		    cout << "Wynik: " << wynik << endl;
		    break;
		case '-' :
			wynik = l1 - l2;
		    cout << "Wynik: " << wynik << endl;
		    break;
		case '*' :
			wynik = l1 * l2;
		    cout << "Wynik: " << wynik << endl;
		    break;
		case '/':
			if ((l1 == 0) || (l2 == 0)){
	cout << "Nie mozna dzielic przez 0" << endl;			
	}
	else{
		wynik = l1 / l2;
		cout << wynik <<endl;
	}
		break;
		default :
			cout << "Nieprawidlowy znak" << endl;
	}
    return 0;
}