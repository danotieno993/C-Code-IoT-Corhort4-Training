/*******************************************
 * sing the if-else C++ Program to take a value from the user as input electricity unit charges 
 * and calculate total electricity bill according to the given condition: 
 * For the first 50 units Rs. 0.50/unit………….For the next 100 units Rs. 0.75/unit…..
 * For the next 100 units Rs. 1.20/unit ……………For unit above 250 Rs. 1.50/unit………
 * An additional surcharge of 20% is added to the bill…….Using if-else.
 * 
 * *********************************************/

#include<iostream>
using namespace std;
int main()
{
	int Electricity_Unit;
	float Initial_Amount,Need_To_Pay,s_charge;
	cout<<"enter the number of Electricity_Units you consumed"<<endl;
	cin>>Electricity_Unit;
	switch(Electricity_Unit<=50)
	{
		case 1:
			Initial_Amount=Electricity_Unit*0.50;
			break;
			case 0:
				switch(Electricity_Unit<=150)
				{
					case 1:
						Initial_Amount=25+(Electricity_Unit-50)*0.75;
						break;
						case 0:
							switch(Electricity_Unit<=250)
							{
								case 1:
								Initial_Amount=100+(Electricity_Unit-150)*1.20	;
								break;
								case 0:
								Initial_Amount=220+(Electricity_Unit-250)*1.50;
								break;
							}
						break;	
				}
			break;	
	}
	s_charge=Initial_Amount*0.20;
	Need_To_Pay=Initial_Amount+s_charge;
	cout<<"your total bill is Rs"<<Need_To_Pay;
}
