#include <iostream>
#include <string>
using namespace std;
char check_score(int);
void show_grade(char);
int main()
{
	string name;
	int number , score;
	cout << "Enter Number of student : ";
	cin >> number;
	for (int n = 1 ; n<= number ; n++)
	{
		cout << "Enter name " << n << " : " ;
		cin >> name;
		cout << "Enter score " << n << " : ";
		cin >> score;
		cout << name << " got ";
		char total = check_score(score);
		show_grade(total);
		cout << "\n------------------------end-----------------" << endl;
	}
	return 0;
}
char check_score( int score){
	char grade;
	if(score >=80) grade = 'A';
	else if (score >=70)  grade = 'B';
	else if (score >=60)  grade = 'C';
	else if (score >=50)  grade = 'D';
	else  grade = 'F';
	return (grade);
}
void show_grade(char grade){
  cout << grade << endl;
}  