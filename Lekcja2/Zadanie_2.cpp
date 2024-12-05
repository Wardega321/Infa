#include <iostream>
using namespace std;
int main(){
	
	float waga;
	cout << "Podaj swoja wage (w kilogramach): ";
	cin >> waga;
	
	float wysokosc;
	cout << "Podaj swoj wzrost (w metrach): ";
	cin >> wysokosc;
	
	int BMI = waga / (wysokosc * wysokosc);
	cout << BMI << endl;
	
	if (BMI < 18.5) {
		cout << "Masz niedowage" << endl;
	}
	else if ((BMI >= 18.5) && (BMI <= 24.9)) {
		cout << "Jestes w normie" << endl;
	}
	else if ((BMI >= 25) && (BMI <= 29.9)) {
		cout << "Masz nadwage" << endl;
	}
	else if (BMI > 30)  {
		cout << "Jestes otyly" << endl;
	}
		
	return 0;
}