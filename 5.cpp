#include<iostream>
using namespace std;
int main()
{
    int n,i,cnt=0;
    cout<<"Enter the number"<<endl;
    cin>>n;
    if(n<=1)
    cout<<"not prime";
    else if(n==2||n==3)
    cout<<"Prime";
    else if(n==4)
     cout<<"Not prime";
     else
      for( i=2;i<n/2;i++)
      {
          if(n%i==0)
          cnt=1;
          break;
      }
      if(cnt==1)
      cout<<"Not prime";
      else 
      cout<<"Prime";
      return 0;
}
     

    
