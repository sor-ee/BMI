#include <iostream>
using namespace std;
int main()
{
	int money; 
	float bank1000 , bank500 , bank100;
	cout << "Enter money : ";
	cin >> money;
	do
	 if	(money<100 || money>20000){
	cout << "Sorry, please enter money (100 -  20000) : ";
	cin >> money;
	 }
	 while (money<100 || money>20000);
	 cout << "Total bank note." << endl;
	 bank1000 = money / 1000;
	  money = money % 1000;
	 bank500 = money / 500;
	  money = money % 500;
	 bank100 = money / 100;
	 money = money % 100;
	 
	 cout << "Banknote 1000 : " << bank1000 << endl;
	 cout << "Banknote 500 : " << bank500 << endl;
	 cout << "Banknote 100 : " << bank100 << endl;
	 cout << "Other : " << money << endl;
	 cout << "------EXIT-------\n";
	return 0;
}