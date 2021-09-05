#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the value of a,b and c respectively"<<endl;
    cin>>a>>b>>c;
    int max=a;
    if(b>max)
    max=b;
    if(c>max)
    max=c;
    cout<<"The maximum of all the three value is "<<max;
    return 0;
    

}