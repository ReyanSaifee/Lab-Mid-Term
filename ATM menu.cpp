#include<iostream>
using namespace std;

int main()
{
	int choice;
	double balance=1000;
	do{
		cout<<"Menu"<<endl;
		cout<<"1. Check Balance"<<endl;
		cout<<"2. Deposit Money"<<endl;
		cout<<"3. Withdrawl Money"<<endl;
		cout<<"4. Exit"<<endl;
		cin>>choice;
		
		switch(choice){
			case 1:
				cout<<"Your Current Balance is: $"<<balance<<endl;
				break;
			case 2:
				int deposit;
				cout<<"Enter Deposit Money: $"<<endl;
				cin>>deposit;
				if(deposit>0){
					balance+=deposit;
					cout<<"Deposit Successfully "<<endl;
				}
				else{
					cout<<"Invalid input"<<endl;
				}
				break;
			case 3:
				int withdrawl;
				cout<<"Enter withdraw Amount: $"<<endl;
				cin>>withdrawl;
				if(withdrawl<=balance){
					balance-=withdrawl;
					cout<<"Withdrawl Successfully "<<endl;
				}
				else{
					cout<<"Insufficient Balance "<<endl;
				}
				break;
			case 4:
				cout<<"Thankyou For Banking "<<endl;
				break;
		}
		
	}while(choice!=4);
	return 0;
}
