#include<iostream>
using namespace std;
int main(){
	int num1,num2;
	char op;
	cout<<"Enter first number:"<<endl;
	cin>>num1;
	cout<<"Enetr an operator('+','-','/','*')"<<endl;
	cin>>op;
	cout<<"Enter second number:"<<endl;
	cin>>num2;
	switch(op){
		case '+':
		cout<<"result="<<num1+num2;
		break;
			case '-':
		cout<<"result="<<num1-num2;
		break;
		case '/':
		cout<<"result="<<num1/num2;
		break;
			case '*':
		cout<<"result="<<num1*num2;
		break;
		default:
		cout<<"Invalid operator"<<endl;
	}
	
	
}
