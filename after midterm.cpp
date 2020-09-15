#include <iostream>
#include <string>
#include <time.h>
using namespace std;
int main()
{
	/*char a;
	cout << "Enter character : ";
	cin >> a;
	if (isdigit(a))
		cout << "x is numeric" << endl;
	else{
		cout << "This is alphabet" << endl;
		cout << (char)toupper(a) << endl;
	}*/
	/*int num,n1,n2,n3,n4,n5;
	char ch[10] = "-4567.89";
	cout << abs(atoi(ch))+100 << endl;
	srand(time(NULL)); //ต้อง include time.h
	num = 10000+rand()%99999;
	cout << num << endl;
	n2 = num%10000;
	n3 = n2%1000;
	n4 = n3%100;
	n5 = n4%10;
	cout << num/10000<< "-" << n2/1000 << "-" << n3/100 << "-" << n4/10<<"-" << n5 << endl;*/
	/*char str1[20] = "Hello";
	char str2[20] = " World";
	cout << str1 << "" << str2 << endl;
	cout << str1 << endl; // Hello
	cout << strcat(str1,str2) << endl;
	cout << str1 << endl; // Hello World
	cout << strchr(str1,'l') << endl; // llo World
	cout << str1 << endl;
	cout << strcmp(str1,str2) << endl;
	cout << strcpy(str1,"Hello Na") << endl; // Hello Na
	cout << strlen(str1) << endl; // 8
	//-------------------- strlen------------------------
	char ch[20];
	cout << "Enter String : ";
	cin >> ch;
	for (int i = strlen(ch)-1 ; i>= 0 ; i--)
	{
		cout << (char)toupper(ch[i]);
		if (isalpha(ch[i]))
			cout << "<-- Here is character" << endl;
		else
			cout << "<-- Here is numeric" << endl;
	}*/

	return 0;
}