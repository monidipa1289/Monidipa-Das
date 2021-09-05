#include<iostream>
using namespace std;
int main()
{
    int a,b,n;
    cout<<"Enter the first two number of fabonacci series"<<endl;
    cin>>a>>b;
    cout<<"Enter the number of terms you want to display"<<endl;
    cin>>n;
    int fs[n];
    fs[0]=a;
    fs[1]=b;
    for(int i=2;i<n;i++)
    fs[i]=fs[i-1]+fs[i-2];
    cout<<"The fabonacci series is"<<endl;
    for(int i=0;i<n;i++)
    cout<<fs[i]<<" ";
    return 0;
}

    
    
       

