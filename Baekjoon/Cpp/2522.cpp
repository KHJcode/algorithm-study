#include <iostream>

using namespace std;

int main()
{
    int n, i, j;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << (n - i - 1 <= j ? "*" : " ");
        }
        cout << "\n";
    }
    for (i = n - 1; i >= 0; i--)
    {
        for (j = 0; j < n; j++)
        {
            cout << (n - i <= j ? "*" : " ");
        }
        cout << "\n";
    }
    return 0;
}
