/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int L, W;
    cout<<"Please input Length of the triangle: ";
    cin>>L;
    cout<<"Please input Width of the triangel: ";
    cin>>W;
    

    if(L<=W)
    {
        cout<<"Error, L must be greater than W in a rectangle";
    }
    else
    if(L<=0||W<=0)
    {
        cout<<"Error! The dimension of a triangle cannot be 0 or negative";
    }
    else
    if (L>W){
        float P = (L+W)*2;
        float A = L*W;
        cout<<"Perimeter of the Rectangle is: "<<P;
        cout<<"\nThe area of the Rectangle is: "<<A;
    }
    else
    {
        cout<<"Error! You did not input any value ";
    }
    return 0;
}
