#include<iostream>
using namespace std;
int main()
{
    int yr;
    cout<<"Enter the year"<<endl;
    cin>>yr;
    if(yr%4==0)
    cout<<"The year is a leap year"<<endl;
    else
    cout<<"The year is not a leap year"<<endl;
     return 0;
}