#include <bits/stdc++.h>
#define MAX 21

using namespace std;

int n, res, arr[MAX][MAX];
bool merged[MAX][MAX];

void move_up()
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] > 0)
            {
                int ni = i - 1;
                while (ni >= 0 && arr[ni][j] == 0)
                {
                    arr[ni][j] = arr[ni + 1][j];
                    arr[ni + 1][j] = 0;
                    ni -= 1;
                }
                ni += 1;
                if (ni > 0)
                {
                    if (arr[ni - 1][j] == arr[ni][j] && !merged[ni - 1][j])
                    {
                        arr[ni - 1][j] *= 2;
                        arr[ni][j] = 0;
                        merged[ni - 1][j] = true;
                    }
                }
            }
        }
    }
}

void move_left()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            int nj = j - 1;
            while (nj >= 0 && arr[i][nj] == 0)
            {
                arr[i][nj] = arr[i][nj + 1];
                arr[i][nj + 1] = 0;
                nj -= 1;
            }
            nj += 1;
            if (nj > 0 && arr[i][nj - 1] == arr[i][nj] && !merged[i][nj - 1])
            {
                arr[i][nj - 1] *= 2;
                arr[i][nj] = 0;
                merged[i][nj - 1] = true;
            }
        }
    }
}

void move_down()
{
    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] > 0)
            {
                int ni = i + 1;
                while (ni < n && arr[ni][j] == 0)
                {
                    arr[ni][j] = arr[ni - 1][j];
                    arr[ni - 1][j] = 0;
                    ni += 1;
                }
                ni -= 1;
                if (ni < n - 1)
                {
                    if (arr[ni + 1][j] == arr[ni][j] && !merged[ni + 1][j])
                    {
                        arr[ni + 1][j] *= 2;
                        arr[ni][j] = 0;
                        merged[ni + 1][j] = true;
                    }
                }
            }
        }
    }
}

void move_right()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 2; j >= 0; j--)
        {
            int nj = j + 1;
            while (nj < n && arr[i][nj] == 0)
            {
                arr[i][nj] = arr[i][nj - 1];
                arr[i][nj - 1] = 0;
                nj += 1;
            }
            nj -= 1;
            if (nj < n - 1 && arr[i][nj] == arr[i][nj + 1] && !merged[i][nj + 1])
            {
                arr[i][nj + 1] *= 2;
                arr[i][nj] = 0;
                merged[i][nj + 1] = true;
            }
        }
    }
}

void move(int way)
{
    if (way == 0)
    {
        move_up();
    }
    else if (way == 1)
    {
        move_left();
    }
    else if (way == 2)
    {
        move_down();
    }
    else
    {
        move_right();
    }
}

void rec(int num)
{
    if (num == 0)
    {
        res = max(res, *max_element(&arr[0][0], &arr[0][0] + MAX * MAX));
    }
    else
    {
        int copy[MAX][MAX];
        memcpy(copy, arr, sizeof(arr));
        for (int i = 0; i < 4; i++)
        {
            memset(merged, false, sizeof(merged));
            move(i);
            rec(num - 1);
            memcpy(arr, copy, sizeof(copy));
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    rec(5);
    cout << res;
    return 0;
}
