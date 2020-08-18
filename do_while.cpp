#include <iostream>
#include <string>
using namespace std;
int main()
{
	/*char menu;
	string username,password,user,pass;

	cout << "Pleease enter menu" << endl;
	cout << "------------------" << endl;
	cout << "1. Register"<< endl;
	cout << "2. Login" << endl;
	cout << "Q. Exit" << endl;
	cout << "Select : ";
	cin >> menu;
	do
	{ if (menu=='1') 
		{cout << "Enter username : " ;
		 cin >> username;
		 cout << "Enter password : ";
		 cin >> password;
	    }
	else if(menu=='2') {
		 cout << "Input username for login: " ;
		 cin >> user;
		 cout << "Input password for login: ";
		 cin >> pass;
		 if(username==user&&password==pass)
		 {
			 cout << "Username and password are corect." << endl;
		 }
		 else cout <<"Username or password is incorect." << endl;
	}

	cout << "Select : ";
	cin >> menu;
	
	} 
	while(menu !='Q');*/

	/*int num;
	char ch;
	cout << "Please input number line : ";
	cin >> num;
	if (num%2==0) ch = '@';
	else ch = '*';
		for(int i=1;i<=num;i++)
	{
		for(int j = 1 ;j<= i;j++){
			cout << ch;	
		}
	
		cout << endl;
	}*/

	char grade;
	float gradepoint = 0,gpa = 0 ;
	int counter = 0;
	do{
		cout << "Enter the letter grade (Enter 'x' to exit)  " << endl;
		cin >> grade;
		if (grade == 'a'|| grade == 'A' ) gradepoint +=4;
		else if(grade == 'b'|| grade == 'B' ) gradepoint +=3;
		else if(grade == 'c'|| grade == 'C' ) gradepoint +=2;
		else if(grade == 'd'|| grade == 'D' ) gradepoint +=1;
		else if(grade == 'f'|| grade == 'F' ) gradepoint +=0;
		else if(grade == 'x'|| grade == 'X' ) break;
		else cout << "This input is invalid. Try again." << endl;
		counter++;
	}   
	while (grade !='x' && grade !='X');
	gpa = gradepoint / (double)(counter);
	cout << "Total grade points : " << gradepoint << endl;
	cout << "GPA : " << gpa << endl;
	return 0;
}