
/************************************************************************
Question
Write a program that determines a student’s grade. The program will read three types of scores 
(quiz, mid-term, and final scores) and determine the grade based on the following rules:
if the average score =90% =>grade=A…………………..-if the average score >= 70% and <90% => grade=B-
if the average score>=50% and <70% =>grade=C……………………..-if the average score<50% =>grade=F.

 ***************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int quiz, mid_term, final_score;
    float Average_Score;
    
    
    //request for user inputs
    cout<<"Please input Quiz Score: ";
    cin>>quiz;
    cout<<"Please input Mid Term Score: ";
    cin>>mid_term;
    cout<<"Please input Final Score: ";
    cin>>final_score;
    
    //calculate average score & grade
    Average_Score = (quiz+mid_term+final_score)/3;
    cout<<"Average Score is: " <<Average_Score;
    cout<<"%"<<endl;
    if ((quiz>100) ||(mid_term<0 || mid_term>100)||(final_score<0 || final_score>100))
    {
        cout<<"Error! Marks cannot be out of 0-100% range"<<endl;
    }
    else if(Average_Score>=90 && Average_Score<=100)
    {
        cout<<"The Student's Grade is: A" <<endl;
    }
    else if
     (Average_Score>=70 && Average_Score<90)
    {
        cout<<"The Student's Grade is: B" <<endl;
    }
    else if
    (Average_Score>=50 && Average_Score<70)
    {
        cout<<"The Student's Grade is: C" <<endl;
    }
    else if
     (Average_Score>=0&&Average_Score<50)
     {
        cout<<"The Student's Grade is: F" <<endl;
     }
    return 0;
}
