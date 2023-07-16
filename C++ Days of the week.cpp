
/*********************************************************
Using C++ switch case structure, write a program that reads a number from the user and 
generates an integer between 1 and 7 and displays the name of the weekday (Use the 
if..else if..else statement
***********************************************************/

#include <iostream>

using namespace std;

int main()
{
   
    int day;
    cout<<"Enter a number to indicate a day of the week "<<endl;
    cin>>day;
    
    if (day==1)
    {
        cout<<"Monday";
    }
    else if (day==2)
    {
        cout<<"Tuesday";
    }
    else if (day==3)
    {
        cout<<"Wednesday";
    }
    else if(day==4)
    {
        cout<<"Thursday";
    }
    else if(day==5)
    {
        cout<<"Friday";
    }
    else if(day==6)
    {
        cout<<"Saturday";
    }
    else if(day==7)
    {
        cout<<"Sunday";
    }
    else
    {
        cout<<"the input is invalid";
    }
    return 0;
    
}
    
