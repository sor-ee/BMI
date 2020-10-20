#include <iostream>
#include <string>
using namespace std;
string members[100][4];
string products[100][3];
string number,goods;
string name[100];
string product[100];
int prices[100][2];
int count_member = 0;
int count_product = 0;
int total_prices = 0;
int total_stock[100] ;
int stocks[100];
int stock = 0;
int noname = 0;
int count_stock = 0;
int count = 1;
char menu,select;
bool haveproduct = false;
void insert_product();
void insert_member();
void sell();
int main()
{
	
	
	cout << "1.costumer data\n";
	cout << "2.goods data\n";
	cout << "3.sell goods\n";
	cout << "4.report and exit\n";
	cout << "5.Exit\n";
	do{
		cout<<"Enter menu : ";
		cin>>menu;
		if (menu=='1')
		{
			insert_member(); // เเทรกสมาชิก
		}
		else if (menu=='2')
		{
			insert_product(); //แทรกผลิตภัณฑ์
		}
		else if (menu=='3')
		{
			sell();
		}
		else if (menu=='4')
		{
			
			cout<< "No.\t"<< "ID.\t"<< "Name.\t"<< "price\t"<< "stock\t"<<endl;
			for (int i =0 ;i <count_product;i++){
					cout<< i+1 <<" \t";
					for (int j = 0 ; j<2 ; j++){
						cout<<products[i][j]<<"\t";
					}
					for (int n = 0 ; n<1 ; n++){
						cout<< prices[i][n]<<"\t";
					}
					for (int a = 0;a<1;a++)
					{
						cout<< prices[i][1]<<"\t";
					}
				cout << endl;
			}
			cout << "remaining stocks\n";
			cout<< "Name\t"<<"stock\t"<< endl;
			for (int i =0 ;i <count_product;i++)
			{
				cout<<products[i][1]<<"\t"<< total_stock[i]<<endl;
			}
			cout << "sell daily\n";
			cout << "Name\t"<<"Product\t"<<"stock\n";
			for (int n =0 ;n <count_product;n++)
			{
				cout<<name<<'\t'<<"\t"<<product[n]<<"\t"<<stocks[n];
				cout << endl;
			}
			
		}
	}
while(menu!= '5');
cout <<"Exit\n"; 
system("pause");
	return 0;
}


void insert_member()
{
	char select;
	cout << "Enter ID Member : ";
	cin >> members[count_member][0];
	cout << "Enter Name : ";
	cin >> members[count_member][1]; 
	cout << "Enter Telephone Number : ";
	cin >> members[count_member][2]; 
	cout << "Enter Email : ";
	cin >> members[count_member][3]; 
	cout << "1 = again 2 = back : ";
	count_member++;
	cin >> select ;
	switch(select){
		case '1' : 
			insert_member();
			break;
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
			insert_product();
			break;
	}
}
void sell()
{
	bool haveproduct = false;
			cout<<"Enter member ID : ";
			cin>>number;
			int noname=0;
			for (int i = 0 ; i < count_member ; i++)
			{
				if (number==members[i][0])
				{
					cout << "Hello " <<  members[i][1] << endl;
					cout<<"Input product ID : ";
					cin>>goods;
					
					for (int j = 0 ; j < count_product ; j++)
					{
						if (goods==products[j][0])
						{
							count_stock+=j;
							haveproduct = true;
							
							for (int n = 0 ; n < count_product ; n++)
							{
								product[n]+=products[j][1];
								cout << "Enter amount : ";
								cin >> stock;
								if (stock<=total_stock[count_stock])
								{
									stocks[j]+=stock;
									cout<<"you can buy"<<endl;
									total_prices+=prices[j][0]*stock;
									cout << "Price : "<< total_prices<< " Baht" << endl;
									total_prices = 0;
									if(count==1)
									{
										name[i]+=members[i][1];
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
									break;
								}
								else
								{
									cout << "Not enough\n";
									break;
								}
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
				cout<<"No name\n";
				haveproduct = true;
			}
			if (haveproduct == false) 
			{
				cout << "Don't have product\n";
			}
}
