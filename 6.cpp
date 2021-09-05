
#include <iostream>
#include <math.h>
    using namespace std;

    int main()
    {
        for (int i = 0; i < 5; i++)
        {
            for (int j = 5 - i - 1; j > 0; j--)
                cout << " ";
            for (int j = i + 1; j > 0; j--)
                cout << "* ";
            cout << "\n";
        }
        return 0;
    }
