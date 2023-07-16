/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Area of a Circle with user input
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int r; 
    float pie;
    cout <<"Please input radius of the circle :";
    cin>>r;
    cout<<"Please input pie :";
    cin>>pie;
    float A = pie*pow(r,2);
    float P = 2*pie*r;
    cout<<"Area of Circle is: "<<A <<endl;
    cout<<"Perimeter of the Circle is: "<<P;

    return 0;
}


