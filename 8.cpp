#include<iostream>
using namespace std;
int main()
{
    int n,d;
    cout<<"Enter the value of n and d"<<endl;
    cin>>n>>d;
    int arr[n];
    cout<<"Enter the array element:"<<endl;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int arr1[d];
    for (int i = 0; i < d; i++)
        arr1[i] = arr[i];
    for (int i = 0; i < n - d; i++)
    {
        arr[i] = arr[i + 2];
    }
    for (int i = 0; i < d; i++)
        arr[n - d + i] = arr1[i];
    cout << "The new array is:" << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}