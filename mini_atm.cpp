#include<iostream>
using namespace std;
int main(){
	int choice,Deposit,amount;
	int Balance=1000;
	cout<<"==============ATM SYSTEM===================="<<endl;
	cout<<"1.Balance"<<endl;
	cout<<"2.Deposit"<<endl;
	cout<<"3.Withdraw"<<endl;
	cout<<"4.Exit"<<endl;
	cout<<"Enter  your choice:"<<endl;
	cin>>choice;
	switch(choice){
		case 1:
			cout<<"Your balance is:"<<Balance<<endl;
			break;
		case 2:
			cout<<"Enter amount you want  to deposit:"<<endl;
			cin>>Deposit;
			 Balance=Balance+Deposit;
			 cout<<"Amount is successfully deposit"<<endl;
			cout<<"Balance="<<Balance<<endl;
			break;
		case 3:
			cout<<"Enter amount you want  to withdraw:"<<endl;
			cin>>amount;
			 Balance=Balance-amount;
			
			cout<<"Balance="<<Balance<<endl;
			break;
	}
	
}
