// calculato using Switch case

#include <iostream>
//#include <string>
using namespace std;

int main()
{
    float x,y,z,m,a,h;
    char operations;
    cout<<"Please input the first value: "<<endl;
    cin>>x;
    cout<<"Please input the second value: "<<endl;
    cin>>y;
    cout<<"Please input the operation of interest: "<<endl;
    cin>>operations;
    z=x+y;
    m=x*y;
    a=x-y;
    h=x/y;
    switch(operations)
    {
        case '+':
        cout<<"The sum of the two values is: "<<endl<<z<<endl;
        break;
        case '-':
        cout<<"The difference of the two values is: "<<endl<<a<<endl;
        break;
        case '*':
        cout<<"The product of the two values is: "<<endl<<m<<endl;
        break;
        case '/':
        cout<<"The quotient of the two numbers is: "<<endl<<h<<endl;
        break;
        default:
        cout<<"Error! Incorrect operation";
        break;
        
    }

    return 0;
}






