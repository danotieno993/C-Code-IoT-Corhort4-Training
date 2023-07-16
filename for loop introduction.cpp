//For Loop

/*****************
 * for iterating over parts of a code. For loop has 3 parts:
 * First initializa var, check condition, increament/decrement the variable
 * *******************/
 ////Example 1 Increment
// #include <iostream>

// using namespace std;

// int main()
// {
//     for(int i=10; i<=100; i++)  //iterat over rnage of number from 10-100
//     cout<<i<<",";

//     return 0;
// }


// // Example 2 decrement
// #include <iostream>
// using namespace std;

// int main()
// {
//     for(int i=100; i>=10; i=i-10)  //iterat over rnage of number from 10-100
//     cout<<i<<",";

//     return 0;
// }



// //example 3: Alphabets
// #include <iostream>
// using namespace std;

// int main()
// {
//     for (char x = 'A'; x<='Z'; x++)
//     cout <<x<<",";
//     return 0;
// }


// //example 3: Display even number btwn 20 & 50
// #include <iostream>
// using namespace std;

// int main()
// {
//     for (int y = 10; y<=50; y=y+2)
//     cout <<y<<",";
//     return 0;
// }

//example 4: User prompted to enter 2 number, system compute sum & increment the sum upto a given number
#include <iostream>
using namespace std;

int main()
{
    int x,y,z;
    z=x+y;
    cout<<"Please input the first intger: "<<endl;
    cin>>x;
    cout<<"Please input the second integer: "<<endl;
    cin>>y;
    
    for (z =0; z<=100; z=z+10)
    cout<<z<<",";
    
    return 0;
}




