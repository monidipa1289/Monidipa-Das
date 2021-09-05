#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int count = 1;
    for (int i = 0; i < s.length(); i++)
    {
        if ((int)s[i] >= 65 && (int)s[i] <= 90)
            count++;
    }
    cout << count;
    return 0;
}