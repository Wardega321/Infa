#include <iostream>
using namespace std;
int main(){
	
	int N;
	cout << "Podaj liczbe N (dodatnia calkowita): ";
	cin >> N;
	int S = 0;
	
	for(int i = 1; i <= N; i++)
	{
		S += i;
	 } 
	
	cout << "Suma liczb od 1 do " << N << " wynosi: " << S;
    return 0;
}