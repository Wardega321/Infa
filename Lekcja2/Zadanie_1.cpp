#include <iostream>
using namespace std;
int main(){
	
	int punkty;
	cout << "Podaj wynik egzaminu (liczbe punktow) :";
	cin >> punkty;
	if ((punkty >= 0) && (punkty <= 49)) {
		cout << "Ocena: Niedostateczna" << endl;
	}
	else if ((punkty >= 50) && (punkty <= 69)) {
		cout << "Ocena: Dostateczna" << endl;
	}
	else if ((punkty >= 70) && (punkty <= 84)) {
		cout << "Ocena: Dobra" << endl;
	}
	else if ((punkty >= 85) && (punkty <= 99)) {
		cout << "Ocena: Bardzo dobra" << endl;
	}
	else if (punkty = 100) {
		cout << "Ocena: Celujaca" << endl;
	}
	
	
	
	
	
	
	
	
	
    return 0;
}