#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int i, d = 2, arr[9];
    for (i = 0; i < 8; i++) {
        scanf("%d", &arr[i]);
        if (i && d)
            if (arr[i - 1] > arr[i])
                d = (d == 1 ? 0 : -1);
            else
                d = (d == -1 ? 0 : 1);
    }
    cout << (d ? (d == 1 ? "ascending" : "descending") : "mixed");
    return 0;
}
