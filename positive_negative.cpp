#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter a number:"<<endl;
	cin>>n;
	if(n>0){
		cout<<"Number is positive"<<endl;
	}
	else if(n<0){
		cout<<"Number is negative"<<endl;
	}
	else{
		cout<<"Numbe is 0"<<endl;
	}
}
