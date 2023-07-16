/******************************************************************************
Arrays is a method for storing elements. An array of type int can only store int elements
Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.
To declare an array, define the variable type, specify the name of the array followed by square brackets and specify 
the number of elements it should store i.e array size:

Multi dimentional array consists multiple rows and collumns e.g 
*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int new_index8_element, index8_element,index9_element,new_index9_element;
    int currency[10]={1,5,10,20,40,50,100,200,500,1000}; //array declation(type, name, array size)
    
    //access array element using index and manipulate it
    index8_element=currency[8];
    cout<<"The element of array index 8 is:"<<endl<<index8_element<<endl;
    //cout<<"The element of array index 7 is:"<<endl<<currency[7]<<endl; 
    if (index8_element<=100)
    {
        new_index8_element=index8_element+(0.5*index8_element);
    }
    else
    {
        new_index8_element=index8_element-(0.5*index8_element);
    }
    cout<<"New Index 8 element is: "<<endl<<new_index8_element<<endl;
   
    //Array manipulation 2
    currency[9]=10000;
    cout<<"The new array elementfor index 10 is currency is: "<<endl<<currency[9]<<endl;
    index9_element=currency[9];
    new_index9_element=index9_element*2;
    cout<<"The new value for index9 element is: \n"<<new_index9_element<<endl;
    
    return 0;
}

