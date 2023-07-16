//Area of a Circle
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int r= 2; 
    float pie = 3.142;
    float A = pie*pow(r,2);
    float P = 2*pie*r;
    cout<<"Area of Circle is: "<<A <<endl;
    cout<<"Perimeter of the Circle is: "<<P;

    return 0;
}
