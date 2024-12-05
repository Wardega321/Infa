#include <iostream>
using namespace std;
int main(){
	
	int N;
	cout << "Podaj liczbe N: ";
	cin >> N;
	
	cout << "Liczby parzyste od 2 do " << N << ": " << endl;
	
	short count = 2;
	
	while(count <= N)
	{
		cout << count << endl;
		count = count + 2;
	}
	
	
	
	
    return 0;
}