#include <iostream>
float calc_square(float,float);
float calc_triangle(float,float);
float calc_circle(float);
using namespace std;
int main()
{
	char menu;
	float square,tri,circle,weight,hight;
	cout << "1. Calculate Area of Square" << endl;
	cout << "2. Calculate Area of Triangle" << endl;
	cout << "3. Calculate Area of Circle" << endl;
	cout << "4. Exit" << endl;
	
	do {
		cout << "Please enter menu : ";
		cin >> menu;
		if (menu == '1'){
		cout << "Enter weight : ";
		cin >> weight;
		cout << "Enter hight : ";
		cin >> hight;
		square = calc_square(weight ,hight);
		cout << "The area of Square = " << square << endl;
		}
		else if (menu == '2'){
		cout << "Enter base : ";
		cin >> weight;
		cout << "Enter hight : ";
		cin >> hight;
		tri = calc_triangle(weight ,hight);
		cout << "The area of Triangle = "<< tri << endl;
		}
		else if (menu == '3'){
		cout << "Enter radius : ";
		cin >> weight;
		circle = calc_circle(weight);
		cout << "The area of Circle = "<< circle << endl;
		}
	}
	while(menu!='4');
	return 0;
}
float calc_square(float weight , float hight){
           float square = weight*hight;
	return square;
}
float calc_triangle(float weight , float hight){
           float tri = 0.5*weight*hight;
	return tri;
}
float calc_circle(float weight){
           float circle = 3.14*weight*weight;
	return circle;
}