
//Example 1
#include<iostream>
using namespace std;
int main()
{
    int i, j, space=10;
    for(i=0; i<6; i++)
    {
        for(j=0; j<space; j++)
            cout<<" ";
        space = space-2;
        for(j=0; j<=i; j++)
            cout<<"* ";
        cout<<endl;
    }
    cout<<endl;
    return 0;
}


// //Example 2
// #include<iostream>
// using namespace std;
// int main()
// {
//     int space, row, col;
//     cout << "Enter space of the half pyramid: ";
//     cin >> space;
    
//     for(row=0; row<space; row++)
//     {
//         for(col=0; col<space; col++)
//             cout<<" ";
//         space = space-2;
//         for(col=0; col<=row; col++)
//             cout<<"* ";
//         cout<<endl;
//     }
//     cout<<endl;
//     return 0;
// }


