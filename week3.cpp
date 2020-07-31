#include <iostream>
using namespace std;
void cal_func(int,int);//ประกาศฟังก์ชั่น
void sub(int,int);//ประกาศฟังก์ชั่น
void mul(int ,int);//ประกาศฟังก์ชั่น
void dev(int ,int);//ประกาศฟังก์ชั่น
int main()
{
	int x,y;
	//int a,b;
	cout <<"Enter number : ";
	cin >> x;
	cout <<"Enter number : ";
	cin >> y;
	cal_func(x,y);//เรียกใช้ฟังก์ชั่น
	sub(x,y);//เรียกใช้ฟังก์ชั่น
	mul(x,y);//เรียกใช้ฟังก์ชั่น
	dev(x,y);//เรียกใช้ฟังก์ชั่น
	return 0;
}
void cal_func(int x, int y) //การสร้างฟังก์ชั่น
{
	cout << x <<" + " << y << " = " << x+y << endl;
}
void sub(int x, int y) //การสร้างฟังก์ชั่น
{
	cout << x <<" - " << y << " = " << x-y << endl;
}
void mul(int x, int y) //การสร้างฟังก์ชั่น
{
	cout << x <<" * " << y << " = " << x*y << endl;
}
void dev(int x, int y) //การสร้างฟังก์ชั่น
{
	cout << x <<" / " << y << " = " << x/y << endl;
}