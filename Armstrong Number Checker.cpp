#include<iostream>
using namespace std;

int main(){
	cout<<"====> ARMSTRONG NUMBER <====";
	int num;
	int num2=0;
	int remainder=0;
	int result=0;
	cout<<"\n\nEnter number: ";
	cin>>num;
	num2=num;
	while(num2!=0){
		remainder= num2%10;
		result+=remainder*remainder*remainder;
		num2=num2/10;
	}
	if(result==num){
		cout<<num<<" is an Armstrong number";
	}
	else{
		cout<<num<<" is Not an Armstrong Number";
	}
}
