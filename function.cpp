#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
	/*string name;
	int age;
	float salary,commission;
	cout << "Input name : ";
	cin >> name;
	cout << "Input age : ";
	cin >> age;
	cout << "Input salary : ";
	cin >> salary;
	cout << "Input commission : ";
	cin >> commission;
	cout << setw(40) << setfill('-')<<"-"<<endl;
	cout << "name" << setw(10) << setfill(' ') << "age" << setw(10) << setfill(' ') << "salary" << setw(10) << setfill(' ') << "commission" << endl;
	cout << setw(40) << setfill('-')<<"-"<<endl;
	cout << name << setw(10) << setfill(' ') << age << setw(10) << salary << setw(10) << commission << setw(10) << endl;
	cout << setw(40) << setfill('-')<<"-"<<endl;*/

	/*string s1 = "Lisa";
	string s2 = "Black pink";
	cout << s1.size() << endl; // 4
	cout << s2.size() << endl; // 10
	cout << s2.c_str() << endl; // Black pink
	cout << s2.at(4) << endl; // k
	cout << s2.append(" so cute") << endl; // Black pink so cute
	cout << s2.substr(6,4) << endl; // pink
	cout << s2.erase(9,7) << endl;*/

	string number;
	cout << "Enter number (string) : ";
	cin >> number;
	for(int i = 0 ; i<=number.size()-1 ; i++)
	{
		cout << number.at(i);
		switch(number.at(i))
		{
			case  '0':
					cout << " : zero" << endl;
					break;
			case  '1':
					cout << " : one" << endl;
					break;
			case  '2':
					cout << " : two" << endl;
					break;
			case  '3':
					cout << " : three" << endl;
					break;
			case  '4':
					cout << " : four" << endl;
					break;
			case  '5':
					cout << " : five" << endl;
					break;
			case  '6':
					cout << " : six" << endl;
					break;
			case  '7':
					cout << " : seven" << endl;
					break;
			case  '8':
					cout << " : eight" << endl;
					break;
			case  '9':
					cout << " : nine" << endl;
					break;
			default:
					cout << " : not number." << endl;
					break;
		}
	}
	return 0;
}