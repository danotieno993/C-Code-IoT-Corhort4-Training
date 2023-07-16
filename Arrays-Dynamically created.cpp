#include <iostream>
using namespace std;



  int main()
{
    int row, col;
    int array[3][3];
  
    //request for array element input
    for(row=0; row<=2; row++)
    {
        for (int col=0; col<=2;col++)
        {
        cout<<"Please enter an array element and enter: "<<endl;
        cin>>array[row][col];
        }
        cout<<endl;
    }
    
    //print the array elements
    cout<<"The Array elements are: "<<endl;
    for(row=0; row<=2; row++)
    {
        
        for (int col=0; col<=2;col++)
        {
        
          cout<<array[row][col]<<" "; 
        }
        cout<<endl;
    }
    return 0;
}

