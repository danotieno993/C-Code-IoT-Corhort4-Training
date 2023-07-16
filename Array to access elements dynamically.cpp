/******************************************************************************
Request user input an array index to search for, if the element <100, increment by 5%, if >100 decrement by 5%
*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int index_i_element,new_index_i_element, i; 
    int currency[10]={1,5,10,20,40,50,100,200,500,1000}; //array declation(type, name, array size)
    
    //access array element using index
    //using range based for loop
    //for (const int &n : currency)
    
    for (int i=0; i<=10; i++)
        {
            cout<<"Kindly input the array index you would like to access: "<<endl;
            cin>> currency[i];
            index_i_element =currency[i];
            cout<<"The ith element is:"<<endl<<index_i_element<<endl;
            if (index_i_element<=100)
            {
                new_index_i_element = index_i_element+(0.05*index_i_element);
            }
            else if (index_i_element>100)
            {
                new_index_i_element = index_i_element-(0.05*index_i_element);
            }
        cout<<"The new ith element is: "<<endl<<new_index_i_element<<endl;
        }
    //cout<<"The new ith element is: "<<endl<<new_index_i_element<<endl;
    return 0;
}





