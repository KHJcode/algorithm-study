#include <bits/stdc++.h>

using namespace std;

int walk(int m, vector<int> &books, bool end)
{
    int len = books.size();
    int res = 0;
    int i;
    for (i = m * 2 - 1; i < len; i += m)
    {
        res += books[i - m + 1] * 2;
    }
    if (len % m != 0)
    {
        res += books[i - m + 1] * 2;
    }
    res += books[0] * (1 + int(end));
    return res;
}

inline bool compare(int &a, int &b)
{
    return a > b;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, m, i, x;
    vector<int> narr, parr;
    bool nb = false, pb = false;
    cin >> n >> m;
    for (i = 0; i < n; i++)
    {
        cin >> x;
        if (x > 0)
        {
            parr.push_back(x);
        }
        else
        {
            narr.push_back(-x);
        }
    }
    if (n == 1)
    {
        cin >> x;
        cout << abs(x);
        return 0;
    }
    sort(parr.begin(), parr.end(), compare);
    sort(narr.begin(), narr.end(), compare);
    nb = narr.empty();
    pb = parr.empty();
    if (n <= m)
    {
        if (nb)
        {
            cout << parr[0];
        }
        else if (pb)
        {
            cout << narr[0];
        }
        else
        {
            cout << parr[0] + narr[0] + min(parr[0], narr[0]);
        }
    }
    else if (pb)
    {
        cout << walk(m, narr, false);
    }
    else if (nb)
    {
        cout << walk(m, parr, false);
    }
    else
    {
        int pr, nr;
        if (parr[0] < narr[0])
        {
            pr = parr.size() <= m ? parr[0] * 2 : walk(m, parr, true);
            nr = narr.size() <= m ? narr[0] : walk(m, narr, false);
        }
        else
        {
            pr = parr.size() <= m ? parr[0] : walk(m, parr, false);
            nr = narr.size() <= m ? narr[0] * 2 : walk(m, narr, true);
        }
        cout << pr + nr;
    }
    return 0;
}
