#include <bits/stdc++.h>

using namespace std;

int a, b, arr[51][51];
bool vst[51][51];

void find(int x, int y)
{
    if (!vst[x][y] && arr[x][y] == 1 && x < b && x > -1 && y < a && y > -1)
    {
        vst[x][y] = true;
        find(x + 1, y);
        find(x - 1, y);
        find(x, y + 1);
        find(x, y - 1);
        find(x + 1, y + 1);
        find(x - 1, y - 1);
        find(x + 1, y - 1);
        find(x - 1, y + 1);
    }
}

int main()
{
    int i, j, c, x, y;
    pair<int, int> k;
    vector<int> res;
    vector<pair<int, int>> sum;
    cin >> a >> b;
    while (a != 0 || b != 0)
    {
        sum = vector<pair<int, int>>();
        for (i = 0; i < b; i++)
        {
            for (j = 0; j < a; j++)
            {
                cin >> arr[i][j];
                vst[i][j] = false;
                if (arr[i][j] == 1)
                {
                    sum.push_back(make_pair(i, j));
                }
            }
        }
        c = 0;
        for (auto k : sum)
        {
            x = k.first;
            y = k.second;
            if (!vst[x][y])
            {
                find(x, y);
                c += 1;
            }
        }
        res.push_back(c);
        cin >> a >> b;
    }
    for (auto c : res)
    {
        cout << c << "\n";
    }
    return 0;
}
