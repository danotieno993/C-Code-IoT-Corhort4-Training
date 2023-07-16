//Creat a Square Pattern uisng for loop
#include <iostream>
using namespace std;


int main()
{
    int square;
    cout<<"Please input the size of the square: "<<endl;
    cin>>square;
    
    for (int row =1;row<=square;row++)
    {
        for (int col = 1; col<=square; col++)
        {
            cout<<"*";
        }
         cout<<endl;
    }
    return 0;
}



