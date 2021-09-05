#include <iostream>
using namespace std;

int multi(int x)
{
    int i = x / 5;
    return 5 * (i + 1);
}

void round(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 38)
            continue;
        if (multi(arr[i]) - arr[i] < 3)
            arr[i] = multi(arr[i]);
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    round(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << "\n";
    return 0;
}