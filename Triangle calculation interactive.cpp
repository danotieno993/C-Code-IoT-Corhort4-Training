//Area of a triangle
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int B, H;
    
    cout<<"Please enter the value of B: ";  //prints on screen
    cin>>B;                                 //allow users to input values on iterractive terminals
    cout<<"Please enter the value of H: ";
    cin>>H;
    int Hy =sqrt(pow(B,2)+pow(H,2)); 
    cout<<"The hyponenus of the Triangle is: "<<Hy <<endl;
    float A = (B*H)/2;
    float P = B+H+Hy;
    cout<<"Area of Triangle is: "<<A;
    cout<<"\nThe Perimeter of the Triangle is: "<<P; //\n prints in a new line and must be within "" at the beginning of the line

    return 0;
}



