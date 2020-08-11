#include <iostream>
using namespace std;
int mul(int , int);
void show_sum(int);
int main()
{
	/*cout << 1;
	cout << 2;
	cout << 3;
	cout << 4;
	cout << 5;
	cout << endl;
	int num,number,sum = 0;
	cout << "Enter start number : ";
	cin >> num;
	cout << "Enter stop number : ";
	cin >> number;
	for(int i=1;;i++)
	{if(num<number) {
		cout << "The stop number is less than start number." << endl;
	cout << "Enter stop number : ";
	cin >> number;
	}
	else break;
	}
	for (int n = num ; n>= number ; n-=2)
	{
	cout << n;
	cout << endl;
	sum = sum + n;
	}
	cout << "sum = " << sum << endl;*/
	int num1 ,num2 ;
	cout << "Input first number : ";
	cin >> num1;
	cout << "Input second number : ";
	cin >> num2;
	int total = mul (num1 , num2 ); // ให้ค่า total เก็บค่าที่คืนมาจาก mul
	show_sum(total);
	return 0;
}
int mul(int num1 , int num2 ) {
	int sum = 0;
	for (int n = 1 ; n<= num2 ; n++)
	{
	cout << num1 << " * " << n << " = " << num1 * n << endl;
	cout << endl;
	sum = sum + (num1*n);
	}
	return sum; // คืนค่า  sum ไปที่ main
}
void show_sum(int sum) {
	cout << "sum = " << sum << endl;;
}