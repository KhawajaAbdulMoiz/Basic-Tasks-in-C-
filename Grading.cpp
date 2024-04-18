#include<iostream>
using namespace std;
int main(){
	int marks;
	
	cout<<"Enter Your Marks : ";
	cin>>marks;
	if(marks>0 && marks<=100){
		 if(marks>80 && marks<=100){
						cout<<"grade is A+.";
					}
					else if(marks>=70 && marks<=79){
						cout<<"grade is A.";
					
					}
					else if(marks>=60 && marks<=69){
						cout<<"grade is B.";
					}
					else if(marks>=40 && marks<=49){
						cout<<"grade is D.";
					}
					else if(marks>=50 && marks<=59){
						cout<<"grade is C.";
					}
					else {
						cout<<"gradeF";
					}
					
				
					
			}
			else{
						cout<<"Error";
					}

				}
					
				
