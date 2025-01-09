#include <iostream>
using namespace std;
int main(){
	
	int N;
	cout << "Podaj liczbe N: ";
	cin >> N;
	
	cout << "\nLiczby nieparzyste od 1 do " << N << ": " << endl;
	
	for (int i = 1; i <= N; i++ ) {
		if (i % 2 != 0) {
			cout << i << " " << endl;
			
		}
	}
	
	
	
	
	
	
	
	
	
	
	
	
    return 0;
}