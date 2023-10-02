#include <bits/stdc++.h>
#define MAX 2147483647

using namespace std;

vector<pair<int, int>> chickens, houses;
vector<int> current;
int m;
int res = MAX;

void rec(int x)
{
    int size = current.size();
    if (size == m)
    {
        int dis = 0;
        int houses_len = houses.size();
        int crt_len = current.size();
        for (int i = 0; i < houses_len; i++)
        {
            int d = MAX;
            for (int j = 0; j < crt_len; j++)
            {
                d = min(d, abs(houses[i].first - chickens[current[j]].first) + abs(houses[i].second - chickens[current[j]].second));
            }
            dis += d;
        }
        res = min(res, dis);
    }
    else if (size < m)
    {
        int len = chickens.size();
        for (int i = x + 1; i < len; i++)
        {
            current.push_back(i);
            rec(i);
            current.pop_back();
        }
    }
}

int main()
{
    int n, i, j, d;
    cin >> n >> m;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> d;
            if (d == 2)
            {
                chickens.push_back(make_pair(i, j));
            }
            else if (d == 1)
            {
                houses.push_back(make_pair(i, j));
            }
        }
    }
    rec(-1);
    cout << res;
    return 0;
}
