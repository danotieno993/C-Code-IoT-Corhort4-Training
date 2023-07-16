/******************************************************************************

Write a program to display the hours and minutes 
Sample Output:
Display the Hours and Minutes
----------------------------------------
Enter Number of Seconds: 128
Hours = 2
Minutes = 8

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int seconds,minutes,hours;
    cout << "\n Display the Hours and Minutes :\n";
	cout << "-----------------------------------\n";
    cout<<"Enter the number of Seconds:\n";
    cin>>seconds;
    hours=seconds/3600;
    minutes=seconds/60;
    cout<<"\nHours = "<<hours;
    cout<<"\nMinutes = "<<minutes;
    return 0;
}

