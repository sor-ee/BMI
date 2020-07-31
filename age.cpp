#include <iostream>
#include <string>
using namespace std;
void cal_age(string ,int); //ประกาศฟังก์ชั่น
int main()
{
	int birth_year;
	string name;
	cout << "Enter your name : ";
	cin >> name;
	cout << "Enter your birth_year : ";
	cin >> birth_year;
	cal_age(name,birth_year); //เรียกใช้ฟังก์ชั่น
	return 0;
}
void cal_age(string name,int birth_year) //สร้างฟังก์ชั่น
{
	cout << name <<" age = " << 2563-birth_year << " years old. " << endl;
} 