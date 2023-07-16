/******************************************************************************

Using the if..else structure, Write a program that reads an LED’s value from a microcontroller 
(1 for ON or 0 for OFF) and prints “ON” or “high”, 
Sample Output:
What is the LED state: 1
The diode is ON


*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int diode_state;
    cout<<"What is the LED state:\n";
    cin>>diode_state;
    if (diode_state == 1)
    {
        cout<<"The diode is ON\n";
    }
    else if (diode_state == 0)
    {
        cout<<"The diode is OFF\n";
    }
    else
    {
        cout<<"Error!Incorrect input for diode state\n";
    }
    return 0;
}
