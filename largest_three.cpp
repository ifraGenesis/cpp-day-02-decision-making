#include<iostream>
using namespace std;
int main(){
	int num1,num2,num3;
	cout<<"Enter  three numbers:"<<endl;
	cin>>num1;
	cin>>num2;
	cin>>num3;
	if(num1==0 && num2==0 && num3==0){
		cout<<"All numbers are zero"<<endl;
	}
else if(num2>num1 && num3){
	 cout<<"largest number is "<<num2<<endl;
	}
 else if(num3>num1 && num2){
	 cout<<"largest number is "<<num3<<endl;
	}
	else{
		cout<<"largest number is"<<num1;
	}

}
