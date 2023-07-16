//Area of Trapezium with user input
#include <iostream>

using namespace std;

int main()
{
    int a, b, h;
    cout<<"Please input the value of a :";
    cin>>a;
    cout<<"Please input value of b :";
    cin>>b;
    cout<<"please input value of h :";
    cin>>h;
    float A = ((a+b)/2)*h;
    cout<<"Area of trapezium is :"<<A;
    

    return 0;
}
