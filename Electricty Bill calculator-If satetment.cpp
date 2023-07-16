/***************************************************************
 * A program that takes units as input from the user, and unit rates are assigned by the programmer and the program calculates the electricity bill.
Solution:

How many values need to be stored in a variable?

There are two different rates for each customer. The high rate is for customers with fewer units consumed and low rate is for customers with low units consumed. So we require 2 variables;

rate1 and rate2
int rate1 and rate2 mean that these two variables only stores integer values.
When the user inputs the units, then we need to store the units in a unit variable.
When a total bill is calculated, then we need to store the bill in a variable bill.
***************************************************************************/

#include<iostream>
using namespace std;
int main()
{
	int rate1, rate2, units, bill;
	rate1=5;
	rate2=10;
	cout<<"enter units consumed by cient:"<<endl;
	cin>>units;
	if(units<250)
	{
		bill=units*rate1;
		cout<<"totoal bill is"<<bill<<endl;
	}
	else
	{
		bill=units*rate2;
		cout<<"totoal bill is"<<bill<<endl;
	}
}
