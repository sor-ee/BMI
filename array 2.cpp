#include<iostream>
using namespace std;
int main()
{
	/*int val[3][4] = {8,16,9,52,3,15,27,6,14,25,2,10};
	cout<<"Display all elements of array"<<endl;
	cout<<val[0][0]<<" "<<val[0][1]<<" "<<val[0][2]<<" "<<val[0][3]<<endl;
	cout<<val[1][0]<<" "<<val[1][1]<<" "<<val[1][2]<<" "<<val[1][3]<<endl;
	cout<<val[2][0]<<" "<<val[2][1]<<" "<<val[2][2]<<" "<<val[2][3]<<endl;
	for (int i = 0 ; i < 3 ; ++i)
	{
		cout << endl;
		for (int j = 0 ; j < 4 ; ++j)
			cout << val[i][j] << " ";
	}
	cout << endl;
	for (int i = 0 ; i < 3 ; ++i)
	{
		cout << endl;
		for (int j = 0 ; j < 4 ; ++j)
		{
			val[i][j] = val[i][j]*2;
			cout << val[i][j] << " ";
		}
	}
	cout << endl;
	int score[2][4];
	for(int i=0;i<2;i++) {
		cout << "Input subtest "<<i+1<<" : ";
		cin>>score[i][0];
		cout << "Input midterm "<<i+1<<" : ";
		cin>>score[i][1];
		cout << "Input final "<<i+1<<" : ";
		cin>>score[i][2];
		score[i][3] = score[i][0] + score[i][1] + score[i][2];
		cout << "--------------------" << endl;
	}
	cout << "Output" << endl;
	cout << "--------------------------------------" << endl;
	cout << "No.\tSubtest\tMidterm\tFinal\tTotal"<< endl;
	cout << "--------------------------------------" << endl;
	for(int i=0;i<2;i++) {
		cout<<i+1<<"\t";
		for(int j=0;j<4;j++)
			cout<<score[i][j]<<"\t"<<" ";
		cout<<endl;
}*/
	int m[5][5];
	int r,c;
	cout << "Enter number of rows : ";
	cin >> r;
	cout << "Enter number of rows : ";
	cin >> c; 
	cout << "Enter matrix : \n";
	for (int i = 0; i<r ;i++)
	{
		for(int j = 0 ; j<c;j++)
		{
			cin >> m[i][j];
		}
	}
	cout << "Matrix 2A" << endl;
	for (int i = 0; i<r ;i++)
	{
		cout << endl;
		for(int j = 0 ; j<c;j++)
		{
			m[i][j]=m[i][j]*=2;
			cout << m[i][j] << "\t";
		}
	}
	cout << endl;
	cout << "Transpose Matrix 3A" << endl;
	for(int j = 0 ; j<c;j++)
	{
		cout << endl;
		for (int i = 0; i<r ;i++)
		{
			cout << m[i][j] << "\t";
		}
	}
	cout << endl;
	return 0;
}