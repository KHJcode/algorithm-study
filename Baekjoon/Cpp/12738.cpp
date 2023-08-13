#include <bits/stdc++.h>
#define MAX 1000001

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, i, size, s, e, m, arr[MAX], lis[MAX];
    cin >> n;
    size = 0;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i)
        {
            if (lis[size - 1] < arr[i])
            {
                lis[size] = arr[i];
                size += 1;
            }
            else
            {
                s = 0;
                e = size - 1;
                while (s < e)
                {
                    m = (s + e) / 2;
                    if (lis[m] >= arr[i])
                    {
                        e = m;
                    }
                    else
                    {
                        s = m + 1;
                    }
                }
                lis[e] = arr[i];
            }
        }
        else
        {
            size += 1;
            lis[0] = arr[0];
        }
    }
    cout << size;
    return 0;
}
