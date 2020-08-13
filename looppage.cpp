#include <iostream>
using namespace std;
int CalAge(int);
int main()
{
    int year ;
    for (int n = 1 ; n<= 3 ; n++){
    cout << "Enter year " << n << " : ";
    cin >> year;
	int age = CalAge(year);
    cout << "age " << n << " : " << age << endl;
    }
    cout <<"\nThank you. " << endl;
    return 0;
}
int CalAge(int year){
int age = 0;
age = 2563 - year ;
	return(age) ;
}