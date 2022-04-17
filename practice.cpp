#include<iostream>
using namespace std;
class Safaricom
{
	public:
	char ch1;
	void display()
	{
			char ch2;
			do{
				system ("cls");
				cout<<"Messaging services"<<endl;
				cout<<"Internet & more"<<endl;
				cout<<"Fun"<<endl;
				cout<<"My Account"<<endl;
				cout<<"My kiosk"<<endl;
				cout<<"Info Kiosk"<<endl;
				cout<<"M-Banking Services"<<endl;
				cin>>ch2;


			}while(ch2==true);
			
		
	}

};
class mpesa
{
	char ch3;
	int phone;
	public:
	menu()
	{
		char ch3;
		do{
			system("cls");
		cout<<"1.Send Money"<<endl;
		cout<<"2.Withdraw Cash"<<endl;
		cout<<"3.Buy Airtime"<<endl;
		cout<<"4.Loans and Savings"<<endl;
		cout<<"5.Lipa na M-PESA"<<endl;
		cout<<"6.My Account"<<endl;
		cin>>ch3;
		switch(ch3)
		{
			case '1':
			system("cls");
			cout<<"Enter phone no."<<endl;
			cin>>phone;
			if(phone!=10){
				cout<<"phone number should be 10 digits."<<endl;
			}
			break;
			case '2':
			system("cls");
			char ch4;
			cout<<"1.From Agent"<<endl;
			cout<<"2.From ATM"<<endl;
			cin>>ch4;
			break;
			case '3':
			system("cls");
			char ch5;
			cout<<"1.My phone"<<endl;
			cout<<"2.Other phone"<<endl;
			cin>>ch5;
			break;
			case '4':
			system("cls");
			char ch6;
			cout<<"1.M-Shwari"<<endl;
			cout<<"2.KCB M-PESA"<<endl;
			cin>>ch6;
			break;
			case '5':
			system("cls");
			char ch7;
			cout<<"1.Pay Bill"<<endl;
			cout<<"2.Buy Goods and Services"<<endl;
			cout<<"3.Pochi La Biashara"<<endl;
			cin>>ch7;
			break;
			case '6':
			system("cls");
			char ch8;
			cout<<"1.Mini Statement"<<endl;
			cout<<"2.Check Balance"<<endl;
			cout<<"3.Change PIN"<<endl;
			cout<<"4.Change Language"<<endl;
			cout<<"5.Update Customer Menu"<<endl;
			cin>>ch8;
			break;
			default:
			cout<<"Invalid choice"<<endl;
			break;
		}
		
		}while(ch3==true);
	}
};


int main()
{
	char chI;
	Safaricom saf;
	mpesa mp;
	
do
{
	system("cls");
	cout<<"1.Safaricom+ \n"
	 	<<"2.M-PESA \n";
	cin>>chI;
	switch (chI)
	{
		case '1':
		saf.display();
		break;
		
		case '2':
		mp.menu();
	 	break;
		default:
		cout<<"Invalid Choice";
		break;

	}

}while(chI==true);
    

	return 0;
}