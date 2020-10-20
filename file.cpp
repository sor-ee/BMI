#include <iostream>
#include <fstream>
#include <string>
#include <time.h>
#include <iomanip>
using namespace std;
int value;
int main()
{
	ofstream Outfile;
	string name;
	int score,score2,total;
	string Filename = "myfile2.txt";
	Outfile.open(Filename.c_str()/*,ios_base::out |ios_base::app*/);
	//srand(time(NULL));
	if(Outfile.is_open())
	{
		cout <<"File is opened\n";
		for (int i = 0 ;i<3;i++)
		{
			//value = rand()%100;
			cout << "Enter name : ";
			cin>>name;
			cout << "Enter midterm : ";
			cin>>score;
			cout << "Enter fianl : ";
			cin>>score2;
			total = score + score2;
			Outfile<<name<<" "<<score<<" "<<score2<<" "<<total;
		}
	}else
	{
		cout <<"File cound not opened\n";
	}
	Outfile.close();
	ifstream Infile;
	Infile.open(Filename.c_str());
	if(Infile.is_open())
	{
		cout <<"File is opened\n";
		cout <<"name"<<setw(10)<<"midterm"<<setw(10)<<"final"<<setw(10)<<"total"<<endl;
		while (Infile>>name>>score>>score2>>total)
		{
			cout <<name<<setw(10)<<score<<setw(10)<<score2 <<setw(10)<< total << endl;
		}
	}else
	{
		cout <<"File cound not opened\n";
	}
	return 0;
}