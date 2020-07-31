#include <iostream>
using namespace std;
int main()
{
	float C,F;
	cout << "Enter temperature (celceis) : ";
	cin >> C;
	cout << "Today weather is ";
	cout << ((F = C * 1.8 + 32)>=70? "HOT" : "COOL") <<endl;
	cout << F << " Farenhigh.\n ";
	return 0;
}