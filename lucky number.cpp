#include <iostream>
#include <time.h>
using namespace std;
int main()
{
	int number = 0,num,count = 1;
	srand(time(NULL));
	number = 1+rand()%20;
	do{
	cout << "Enter lucky number " << count << " (1-20) : " ;
	cin >> num;
	if(number != num)
		cout << "This is wrong number." << endl;
	count++;
	}while(number != num);
	cout << "Lucky!!!!" << endl;
	cout << "You got 1,000,000 bath." << endl;
	return 0;
}