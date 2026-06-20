#include<iostream>
using namespace std;
int main(){
	int choice;
	float Area,length,width,radius,base,height;
	cout<<"Area calculator"<<endl;
	cout<<"1.Area of rectangle"<<endl;
	cout<<"2.Area of triangle"<<endl;
	cout<<"3.Area of circle"<<endl;
	cout<<"Enter your choice:"<<endl;
	cin>>choice;
	switch(choice){
		case 1:
		   cout<<"Enter length of rectangle:"<<endl;
		   cin>>length;
		    cout<<"Enter width of rectangle:"<<endl;
		   cin>>width;
		   Area=length*width;
		   cout<<"Area of rectangle="<<Area;
		   break;
		case 2:  
		   cout<<"Enter base of triangle:"<<endl;
		   cin>>base;
		    cout<<"Enter height of triangle:"<<endl;
		   cin>>height;
		   Area=(base*height)/2;
		   cout<<"Area of triangle="<<Area;
		   break;
		case 3:  
		   cout<<"Enter radius of circle:"<<endl;
		   cin>>radius;
		   Area=3.14159*radius*radius;
		   cout<<"Area of circle="<<Area;
		   break;
		default:
		    cout<<"Invalid choice!" ;  
	}
	
}
