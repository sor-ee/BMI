#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
string members[100][4];
string products[100][3];
string name[100];
string number,goods;
string product[100];

int prices[100][2];
int total_stock[100] ;
int stocks[100];
int each_price[100];
int count_member = 0;
int count_product = 0;
int total_prices = 0;
int stock = 0;
int noname = 0;
int count_stock = 0;
int count = 1;
int total_all;
char menu,select;
bool haveproduct = false;
void insert_product();
void insert_member();
void sell();
int main()
{
	
	cout<<"***********************"<<endl;
	cout << "1.costumer data\n";
	cout << "2.goods data\n";
	cout << "3.buy product\n";
	cout << "4.report and exit\n";
	//cout << "5.Exit\n";
	cout<<"***********************"<<endl;
	do{
		cout<<"Enter menu : ";
		cin>>menu;
		if (menu=='1')
		{
			system("cls");
			insert_member(); 
		}
		else if (menu=='2')
		{
			system("cls");
			insert_product(); 
		}
		else if (menu=='3')
		{
			system("cls");
			sell();
		}
		else if (menu=='4')
		{
			
			system("cls");
			cout<<setw(32)<<"ALL STOCKS\n";
			cout<<"--------------------------------------------------------"<<endl;
			cout<< setw(10)<<left<<"No."<<setw(10)<<left<< "ID."<<setw(10)<<left<< "Name."<<setw(10)<<left<< "price"<<setw(10)<<left<<"stock"<<endl;
			cout<<"--------------------------------------------------------"<<endl;
			cout<<endl;
			for (int i =0 ;i <count_product;i++){
					cout<<setw(10)<<left<< i+1 ;
					for (int j = 0 ; j<2 ; j++){
						cout<<setw(10)<<left<<products[i][j];
					}
					for (int n = 0 ; n<1 ; n++){
						cout<<setw(10)<<left<< prices[i][n];
					}
					for (int a = 0;a<1;a++)
					{
						cout<<setw(10)<<left<< prices[i][1]<<endl;
					}
			
			
			}
			cout<<endl;
			cout<<"--------------------------------------------------------"<<endl;
			cout<<endl;
			cout<<"REMAINING STOCKS\n";
			cout<<"--------------------------------------------------------"<<endl;
			cout<< setw(10)<<left<<"Name"<<setw(10)<<left <<"stock"<<endl;
			cout<<"--------------------------------------------------------"<<endl;
			
			for (int i =0 ;i <count_product;i++)
			{
				cout<<setw(10)<<left<<products[i][1]<<setw(10)<<left<< total_stock[i]<<endl;
			}
			cout<<"--------------------------------------------------------"<<endl;
			cout<<endl;
			
			cout <<"DAILY SELL\n";
			cout<<"--------------------------------------------------------"<<endl;
			cout <<setw(25)<<left<< "Name"<<setw(15)<<left<<"Product"<<setw(10)<<left<<"Amount"<<setw(10)<<left<<"Price"<<endl;
			cout<<"--------------------------------------------------------"<<endl;
			for (int n =0 ;n <count_product;n++)
			{
				cout<<setw(25)<<left<<name[n]<<setw(15)<<left<<product[n]<<setw(10)<<left<<stocks[n]<<setw(10)<<left<<each_price[n];
				cout << endl;
			}
			cout<<"--------------------------------------------------------"<<endl;
			cout<<"TOTAL:"<< total_all<<endl;
			cout<<"--------------------------------------------------------"<<endl;
			cin.get();
			cin.ignore();
		}
	}
	while(menu!= '4');
	
	if (menu == '4') exit(0);
	main();
	cout <<"\nExit\n"; 
	system("pause");
	return 0;
}


void insert_member()
{
	char select;
	cout << "Enter ID Member : ";
	cin >> members[count_member][0];
	cout << "Enter Name : ";
	cin.get();
	getline(cin, members[count_member][1]);
	cout << "Enter Telephone Number : ";
	cin >> members[count_member][2]; 
	cout << "Enter Email : ";
	cin >> members[count_member][3]; 
	cout << "1 = again 2 = back : ";
	count_member++;
	cin >> select ;
	switch(select){
		case '1' : 
			system("cls");
			insert_member();
			break;
		case '2' :
			system("cls");
			main();
	}
}
void insert_product()
{
	char select;
	cout << "Enter ID Product : ";
	cin >> products[count_product][0];
	cout << "Enter Name Product : ";
	cin >> products[count_product][1]; 
	cout << "Enter Price : ";
	cin >> prices[count_product][0]; 
	cout << "Enter Stock : ";
	cin >> prices[count_product][1]; 
	total_stock[count_product] = prices[count_product][1];
	cout << "1 = again 2 = back : ";
	count_product++;
	cin >> select ;
	switch(select){
		case '1' : 
			system("cls");
			insert_product();
			break;
	}
	system("cls");
	main();
}
void sell()
{
	bool haveproduct = false;
			cout<<"Enter member ID : ";
			cin>>number;
			int noname=0;
			total_prices = 0;

			for (int i = 0 ; i < count_member ; i++)
			{
				if (number==members[i][0])
				{
					cout << "Hello " <<  members[i][1] << endl;
					cout<<"Input product ID : ";
					cin>>goods;
					if (name[i]!=members[i][1])
					{
						name[i]+=members[i][1];
					}
					for (int j = 0 ; j < count_product ; j++)
					{
						if (goods==products[j][0])
						{
							count_stock+=j;
							haveproduct = true;
							
							for (int n = 0 ; n < count_product ; n++)
							{
								if (product[j]!=products[j][1])
								{
									product[j]+=products[j][1];
								}
								do {
									if ((stock>total_stock[count_stock])) cout << "Not enough product" << endl;
									cout << "Enter amount : ";
									cin >> stock;
								} while (stock>total_stock[count_stock]);
								if (stock<=total_stock[count_stock])
								{
									stocks[j]+=stock;
									cout<<"you can buy"<<endl;
									total_prices+=prices[j][0]*stock;
									cout << "Price : "<< total_prices<< " Baht" << endl;
									total_all+=total_prices;
									each_price[j]+=total_prices;
									//cin.get();
									//cin.ignore();
									
									if(count==1)
									{
										//name[i]+=members[i][1];
										total_stock[count_stock] = prices[count_stock][1] - stock  ;
									}
									else
									{
										total_stock[count_stock] = total_stock[count_stock] - stock;
									}
									count_stock = 0;
									/*if (total_stock[count_stock] == 0)
									{
										products[j][1] = "Out of stock";
									}*/
									count++;
									cout << "1 =  buy again 2 = back : ";
									cin >> select ;
									switch(select){
										case '1' :
										sell();
										break;
										}
								}
								else
								{
									cout << "Not enough\n";
									break;
								}
								break;
							}
						}
					}
					noname=1;
					break;
				}
				else
				{
					noname=0;
				}
			}	
			if(noname==0)
			{
				cout<<"Not found member in data\n";
				cout << "Please enter back to menu please select menu 1 for regster before use! . . .";
				cin.get();
				cin.ignore();
				system("cls");
				main();
				haveproduct = true;
				
			}
			if (haveproduct == false) 
			{
				cout << "Don't have product\n";
			}
		cout << "please Enter to continue";
		cin.get();
		cin.ignore();    
		system("cls");
		main();
}

