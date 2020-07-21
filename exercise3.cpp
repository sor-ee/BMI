#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main ()
{
	string name;
	float weight,high,BMI;
	cout << "*********Exercise 3*********\n";
	cout << "Enter name : ";
	cin >> name;
	cout << "Enter weight : ";
	cin >> weight;
	cout << "Enter high : ";
	cin >> high;
	BMI = weight/pow(high/100,2); 
	cout << "BMI = " << BMI << endl;
	return 0;
}