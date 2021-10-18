/*
QUESTION: program to find if a number is odd or even
*/

#include<iostream>
using namespace std;
int main()
{
    int number;
    // created a number to store the value
    cin>>number;
    if (number%2 == 0)
    {
        cout<<"even";
    }
    else
    {
        cout<<"odd";
    }
}