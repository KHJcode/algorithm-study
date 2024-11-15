#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    vector<int> outputs;
    int n, m, i, b;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {
        cin >> b;
        if (a[i] == 0)
        {
            outputs.push_back(b);
        }
    }
    cin >> m;
    while (m--)
    {
        cin >> b;
        outputs.insert(outputs.begin(), b);
        cout << outputs.back() << " ";
        outputs.pop_back();
    }
    return 0;
}
