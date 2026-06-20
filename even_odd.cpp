#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enetr a number:"<<endl;
	cin>>n;
		if(n<0){
		cout<<"negative number is not allowed"<<endl;
	}
	else if(n%2==0){
		cout<<"Number is even"<<endl;
	}

	else{
		cout<<"Number is odd"<<endl;
	}
	
}
