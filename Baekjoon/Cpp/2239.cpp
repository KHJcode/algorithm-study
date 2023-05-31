#include <bits/stdc++.h>
#define VAL 9

using namespace std;

int arr[VAL + 1][VAL + 1];
vector<pair<int, int>> blank;

void rec(int idx)
{
    int i, j;
    if (idx < blank.size())
    {
        int x = blank[idx].first;
        int y = blank[idx].second;
        vector<int> gph(VAL + 1, 0), v;
        for (i = 3 * (x / 3); i < 3 * (x / 3 + 1); i++)
        {
            for (j = 3 * (y / 3); j < 3 * (y / 3 + 1); j++)
            {
                gph[arr[i][j]] += 1;
            }
        }
        for (i = 0; i < VAL; i++)
        {
            gph[arr[x][i]] += 1;
            gph[arr[i][y]] += 1;
        }
        for (i = 1; i <= VAL; i++)
        {
            if (gph[i] == 0)
            {
                arr[x][y] = i;
                rec(idx + 1);
                arr[x][y] = 0;
            }
        }
    }
    else
    {
        for (i = 0; i < VAL; i++)
        {
            for (j = 0; j < VAL; j++)
            {
                cout << arr[i][j];
            }
            cout << "\n";
        }
        exit(0);
    }
}

int main()
{
    int i, j;
    char c;
    for (i = 0; i < VAL; i++)
    {
        for (j = 0; j < VAL; j++)
        {
            cin >> c;
            arr[i][j] = c - '0';
            if (arr[i][j] == 0)
            {
                blank.push_back(make_pair(i, j));
            }
        }
    }
    rec(0);
    return 0;
}
