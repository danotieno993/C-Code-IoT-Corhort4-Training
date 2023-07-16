/******************************************************************************

Multi dimentional array consists multiple rows and collumns e.g a 3x3 array initialized as:
array[3][3]={{8,9,5},{4,6,9},{3,5,7}};
*******************************************************************************/

//Multidimentional Arrays
#include <iostream>

using namespace std;

int main()
{
   int array[4][5]={{8,9,5,6,9},{4,6,9,3,7},{3,5,7,5,10},{5,9,8,6,7}};
   cout<<"The 4x4 array is: "<<endl;
   for (int row=0; row<=3; row++) //rows referenced from 0 -3
   {
       for (int col=0; col<=4; col++)
       {
           
           cout<<array[row][col]<<" ";
       }
    cout<<endl;
   }
   
    return 0;
}

