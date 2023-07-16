/******************************************************************************
Write a program to enter Principle Investment, Loan Period (Time), Interest Rate and calculates the Compounded Interest earned and the Final Amount 
Sample Output: 
Calculate the Compound Interest:
 ---------------------------------------------------------------------------------------------
Input the Principal Investment: 20000
Input the Rate of Interest: 10 Input the Time (Years): 1.5 The Interest earned for Ksh. 20000 investment for 1.5 years @ 10 % is: Ksh. 3073.8 The Final Compounoded Amunt is 23073.8


*******************************************************************************/
#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    float P,r,t,A,CI;
    cout << "\n Compound Interest Calculation:\n";
	cout << "-----------------------------------\n";
    cout<<"Please input the Principal Investment: \n";
    cin>>P;
    cout<<"Please input the Rate of Interest: \n";
    cin>>r;
    cout<<"Please input the Time(Years): \n";
    cin>>t;
    CI=P*pow((1+r/100),t)-P; 
    A=P*pow((1+r/100),t);
    cout<<"The Interest earned for Kshs: "<<P<<" investment for "<<t<<" years @ "<<r<<"\% rate is Ksh:\n"<<CI;
    cout<<"\nThe Final Compounded Amuont is kshs:\n"<<A;
    cout<<"\n";
    return 0;
}
