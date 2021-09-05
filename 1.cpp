#include<iostream>
using namespace std;
void swapvalue(int *a,int *b )
{
    int ptr;
    ptr= *a;
    *a=*b;
    *b=ptr;

}
int main()
{
    int a=5,b=10;
    swapvalue(&a,&b);
    cout<<"a="<<a<< " b="<<b;
    return 0;
}