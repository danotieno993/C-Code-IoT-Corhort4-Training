/******************************************************************************

Write a C++ program that can perform the following:
•	Reads daily temperature values (in Celsius units) for one week (7 Days) via user input
•	Converts each value to Fahrenheit units
•	Calculates the weekly average (in Fahrenheit)
Control the program output as follows:
•	Temperatures below 0 degrees are not acceptable
•	Give an appropriate message to the user whenever the average is calculated. E.g Weekly average between 0 and 10 is cold, between 11 and 20 is warm, and above 20 is hot. etc


*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    float fahrenheit, celsius,weekly_average_temp;
    cout << "\n Temperature conversion & Weekly AVerage Calculation System:\n";
	cout << "------------------------------------------------\n";
    fahrenheit = (celsius*9.0)/5.0+32;
    weekly_average_temp = fahrenheit/7;
    cout<<"\nPlease enter temperature value for Monday in Celsius: ";
    cin>>celsius;
    while (celsius<0)
    {
        cout<<"Error! Temperatures cannot be below 0 degrees. \n";
        cout<<"Please re-enter temperature value for Monday in Celsius: ";
        cin>>celsius;
    }
    cout<<"The temperature on Monday in Fahrenheit is: "<<fahrenheit;
    
    cout<<"\nPlease enter temperature value for Tuesday in Celsius: ";
    cin>>celsius;
    while (celsius<0)
    {
        cout<<"Error! Temperatures cannot be below 0 degrees! \n";
        cout<<"Please re-enter temperature value for Tuesday in Celsius: ";
        cin>>celsius;
    }
    cout<<"The  temperature on Tuesday in Fahrenheit is: "<<fahrenheit;
    
    cout<<"\nPlease enter temperature value for Wednesday in Celsius: ";
    cin>>celsius;
    while (celsius<0)
    {
        cout<<"Error! Temperatures cannot be below 0 degrees! \n";
        cout<<"Please re-enter temperature value for Wednesday in Celsius: ";
        cin>>celsius;
    }
    cout<<"The temperature on Wednesday in Fahrenheit is: "<<fahrenheit;
    
    cout<<"\nPlease enter temperature value for Thurday in Celsius: ";
    cin>>celsius;
    while (celsius<0)
    {
        cout<<"Error! Temperatures cannot be below 0 degrees! \n";
        cout<<"Please re-enter temperature value for Thursday in Celsius: ";
        cin>>celsius;
    }
    cout<<"The temperature on Thursday in Fahrenheit is: "<<fahrenheit;
    
    cout<<"\nPlease enter temperature value for Friday in Celsius: ";
    cin>>celsius;
    while (celsius<0)
    {
        cout<<"Error! Temperatures cannot be below 0 degrees! \n";
        cout<<"Please re-enter temperature value for Friday in Celsius: ";
        cin>>celsius;
    }
    cout<<"The temperature on Friday in Fahrenheit is: "<<fahrenheit;
    
    cout<<"\nPlease enter temperature value for Saturday in Celsius: ";
    cin>>celsius;
    while (celsius<0)
    {
        cout<<"Error! Temperatures cannot be below 0 degrees! \n";
        cout<<"Please re-enter temperature value for Saturday in Celsius: ";
        cin>>celsius;
    }
    cout<<"The temperature on Saturday in Fahrenheit is: "<<fahrenheit;
    
    cout<<"\nPlease enter temperature value for Sunday in Celsius: ";
    cin>>celsius;
    while (celsius<0)
    {
        cout<<"Error! Temperatures cannot be below 0 degrees! \n";
        cout<<"Please re-enter temperature value for Sunday in Celsius: ";
        cin>>celsius;
    }
    cout<<"The temperature on Sunday in Fahrenheit is: "<<fahrenheit;
    
    cout<<"\nThe Weekly Average Temperature in Fahrenheit is: " <<weekly_average_temp;
    if (weekly_average_temp>=0 && weekly_average_temp<=10)
    {
        cout<<"\nThe Weather condition is Cold ";
    }
    else if (weekly_average_temp>=11 && weekly_average_temp<=20)
    {
        cout<<"\nThe Weather condition is Warm";
    }
    else if (weekly_average_temp>20)
    {
        cout<<"\nThe Weather condition is Hot";
    }
    
    return 0;
}


