//Area of a triangle
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int B = 3, H=4;
    int Hy =sqrt(pow(B,2)+pow(H,2)); //include <cmath> to user these functions
    float A = (B*H)/2;
    float P = B+H+Hy;
    cout <<"Hypotenus is: "<<Hy <<endl; //<<endl ends the current line and prints in the next line. Not within ""
    cout<<"Area of Triangle is: "<<A; 
    cout<<"\nThe Perimeter of the Triangle is: "<<P; //\n prints in a new line and must be within "" at the beginning of the line

    return 0;
}


