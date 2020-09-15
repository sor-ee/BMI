/*#include <iostream>
using namespace std;
void my_upper(char);
int main ()
{
	char ch;
	cout << "Enter string : ";
	cin >> ch;
	my_upper(ch);
	return 0;
}
void my_upper(char c)
{
	cout << (char)toupper(c) << endl;
}*/
#include <iostream>
using namespace std;
void sum1(int);
void avg1(int);
int main ()
{
	int number ;
	cout << "Enter number : ";
	cin >> number;
	sum1(number);
	avg1(number);
	return 0;
}
void sum1(int number){
	int sum=0;
	for(int i = 1 ; i<=number;i++)
		sum+=i;
	cout << "sum = " << sum << endl;
}
void avg1(int number){
	float sum=0,count = 1;
	for(int i = 1 ; i<=number;i++)
		sum+=i;
	cout << "average = " << sum/number << endl;
}