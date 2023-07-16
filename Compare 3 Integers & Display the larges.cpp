/*************************************************
 Write a C++ program that takes three integers from a user, finds and displays the largest of the 
three
Sample Output:
The Largest of Three Integers  
-------------------------------------
First Number: 5
Second Number: 8
Third Number: 3
The largest number is 8
Consider all the other possible options and provide relevant responses. E.g. when the numbers 
are equal
* *************************************************/
 
#include<iostream>
using namespace std;

int main() 
{
	int num1,num2,num3;
	cout<<"The Largest of Three Integers"<<endl;
	cout<<"-----------------------------"<<endl;
	cout<<"Enter the value for first number: ";
	cin>>num1;
	cout<<"Enter the value for second number: ";
	cin>>num2;
	cout<<"Enter the value for third number: ";
	cin>>num3;
	if(num1>num2&&num1>num3) 
	{
		cout<<"The largest number is "<<num1;
	} 
	else if(num2>num1&&num2>num3) 
	{
		cout<<"The largest number is "<<num2;
	}
	else if (num1==num2 && num1>num3)
	{
	   cout<<"Number 1 & Number 2 are greatest and their value is "<<num1;
	}
	else if (num2==num3 && num2>num1)
	{
	    cout<<"Number 2 & Number 3 are greatest and their value is "<<num2;
	}
	else if(num3==num1 && num3>num2)
	{
	    cout<<"Number 3 & Number 1 are greatest and their value is "<<num3;
	}
	else if(num1==num2 && num1==num3)
	{
	    cout<<"The three numbers are all equal & their value is "<<num1;
	}
	else 
	{
		cout<<"The largest number is "<<num3;
	}
	return 0;
}

