#include <iostream>

using namespace std;

int main()
{
    int n, res = 0;
    cin >> n;
    while (n % 5 != 0 && n >= 2)
    {
        n -= 2;
        res += 1;
    }
    cout << (n == 1 ? -1 : res + n / 5);
    return 0;
}
