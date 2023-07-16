
// //Create inverted pyramid using for loop and * character

//Method 1
#include <iostream>
using namespace std;

int main()
{
    int pyramid; //size of the pyramid
    int row,left_Space,col;
    cout<<"Please input the size of the pyramid: "<<endl;
    cin>>pyramid;
    
    //initialize pyramid size as 6 = rows
    //outer loop iterates n times where n =bo. of rows
    for (row=pyramid; row>=1; row--) 
    {
        //for 1st row; no of rows =pyramid size; spaces to left =6-6 =0
        //for row 2, no of rows =5; space to left =6-5=1
        //for row 3, no of rows =4; space to left =6-4=2
        //for row 4, no of rows =3; space to left =6-3=3 e.t.c
        for (left_Space=0; left_Space<pyramid-row; left_Space++) 
        {
            cout<<" ";
        }
        
        //calculate no * in columns
        //for 1st row, we are at 1st col; no of * in col=2*6-1;  col++.
        //for 2rd row, we are @ 2nd col, then no of * in col=2[(6-1)]rows]-1 i.e. 9;col++.
        //for 3rd row, we are @ 3rd col, then no of * in col=2[(6-2)]rows]-1 i.e. 7;col++.
        //for 5th row, we are @ 5th col, then no of * in col=2[(6-4)]rows]-1 i.e. 3;col++.
        //for 6th row, we are @ 6th col, then no of * in col=2[(6-5)]rows]-1 i.e. 1;col++.
        for (col=row; col<=2*row-1; col++) 
        {
            cout<<"*";
        }
        //initialize col @ 0 from bottom 
        //for col =0; rows from bottom  =1; + in col =1-1 =0
        //for col =1; rows from bottom =2; + in col =2-1 =1
        //for col =2; rows from bottom =3; + in col =3-1 =2
        //for col =3; rows from bottom =4; + in col =4-1 =3
        for (col=0;col<row-1; col++)
        {
            cout<<"+";
        }
         cout<<endl;
    }

    return 0;
}


// //Method 2
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int p;
//     int i,j,k;
//     cout<<"Please input the size of the pyramid: "<<endl;
//     cin>>p;
//     for (i=p; i>=1; i--)
//     {
//         for (k=0; k<p-i; k++)
//         {
//             cout<<" ";
//         }
//         for (j=i; j<=2*i-1; j++)
//         {
//             cout<<"*";
//         }
//         for (j=0;j<i-1; j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }

//     return 0;
// }


