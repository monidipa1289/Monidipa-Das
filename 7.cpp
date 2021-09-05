#include <iostream>
using namespace std;
int main()
{
    int i, n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
        cin >> arr[i];
    int max;
    for (int i = 0; i < 2; i++)
    {
        max = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            if(arr[j] > max)
            {
                int temp=max;
               max = arr[j];
               arr[j]=temp;
            }
           
        }
        arr[i] = max;
    }
    cout << "The second largest element is " << arr[1] << endl;
    return 0;
}
