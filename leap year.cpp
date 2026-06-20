#include<iostream>
using namespace std;
int main(){
	int year;
	cout<<"Enter a year:"<<endl;
	cin>>year;
//	"A year is a leap year if it is divisible by 400 
//	OR it is divisible by 4 but NOT by 100."
   if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)){
		cout<<"This is  a leap year"<<endl;
	}
	else{
		cout<<"Oops!it's Not a leap year"<<endl;
	}
}
