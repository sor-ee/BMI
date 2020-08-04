#include <iostream>
using namespace std;
void cal_quizztotal(float);
void cal_total(float);
int main()
{
	float first_quizz,second_quizz,third_quizz,mid_term,final;
	float quizz_total,total;
	cout << "===========QUIZZES==========\n";
	cout <<"Enter first quizz  (10) : ";
	cin >> first_quizz;
	cout <<"Enter second quizz (10) : ";
	cin >> second_quizz;
	cout <<"Enter third quizz  (10) : ";
	cin >> third_quizz;
	cout << "============MID-TERM========\n";
	cout << "Enter mid-term (40) : ";
	cin >> mid_term;
	cout << "============FINAL===========\n";
	cout << "Enter final (50): ";
	cin >> final;
	quizz_total = (first_quizz+second_quizz+third_quizz)/3;
	total = quizz_total+mid_term+final;
	cal_quizztotal(quizz_total);
	cout << "Mid term : " << mid_term << endl;
	cout << "Final : " << final << endl;
	cal_total(total);
	cout << "your score is ";
	cout << (total>=50?"PASS" : "FAIL") << endl;
	system("pause");
	return 0;
}
void cal_quizztotal(float quizz_total)
{
    quizz_total;
	cout << "Quizz Total : " <<quizz_total << endl;
}
void cal_total(float total)
{
    total;
	cout << "Total : " << total << endl;
}
