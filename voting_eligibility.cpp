#include<iostream>
using namespace std;
int main(){
	int age;
	bool idcard,pakistani,registered;
	
	cout<<"Enter your age:"<<endl;
	cin>>age;
	if(age>=18){
		cout<<"Do you have id card(Enter 1 for yes and 0 for No):"<<endl;
		cin>>idcard;
		if(!idcard){
			cout<<"Not-Eligible for vote"<<endl;
			return 0;
				}
				cout<<"Are you pakistani(Enter 1 for yes and 0 for No):"<<endl;
		cin>>pakistani;
				if(!pakistani){
					cout<<"Not-Eligible for vote"<<endl;
						return 0;
				}
				cout<<"Are you registered(Enter 1 for yes and 0 for No):"<<endl;
		cin>>registered;
				if(!registered){
					cout<<"Not-Eligible for vote"<<endl;
						return 0;
				}
				else{
					cout<<"congratulations! you are eligible for vote";
				}
				
	
}
	else{
		cout<<"Not-Eligible for vote"<<endl;
	}
}
