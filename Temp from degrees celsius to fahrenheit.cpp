/******************************************************************************

Write a program to convert temperature in Celsius to Fahrenheit.

Sample Output:
Convert temperature in Celsius to Fahrenheit :
---------------------------------------------------
Input the temperature in Celsius : 35
The temperature in Celsius : 35
The temperature in Fahrenheit : 95

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    float fahrenheit, celsius;
    cout << "\n Convert temperature in Celsius to Fahrenheit:\n";
	cout << "------------------------------------------------\n";
    cout<<"Input the temperature in Celsius:\n";
    cin>>celsius;
    fahrenheit = (celsius*9.0)/5.0+32;
    cout<<"The temperature in Celsius is:\n" <<celsius;
    cout<<"\nThe temperature in Fahrenheit is:\n"<<fahrenheit;
    return 0;
}

