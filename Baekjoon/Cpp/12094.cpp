#include <iostream>
#include <cstring>
#define MAX 20
#define ROUND 10

using namespace std;

int n, ires, res, arr[MAX][MAX];
int cur_max;
int SIZE = sizeof(arr);

inline bool move_up()
{
    cur_max = ires;
    bool is_move = false, merged[MAX][MAX] = {false};
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == 0)
            {
                continue;
            }
            cur_max = max(cur_max, arr[i][j]);
            int ni = i - 1;
            while (ni >= 0 && arr[ni][j] == 0)
            {
                is_move = true;
                arr[ni][j] = arr[ni + 1][j];
                arr[ni + 1][j] = 0;
                cur_max = max(cur_max, arr[ni][j]);
                ni -= 1;
            }
            ni += 1;
            if (ni > 0 && arr[ni - 1][j] == arr[ni][j] && !merged[ni - 1][j])
            {
                is_move = true;
                cur_max = max(cur_max, arr[ni - 1][j] *= 2);
                arr[ni][j] = 0;
                merged[ni - 1][j] = true;
            }
        }
    }
    return is_move;
}

inline bool move_left()
{
    cur_max = ires;
    bool is_move = false, merged[MAX][MAX] = {false};
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (arr[i][j] == 0)
            {
                continue;
            }
            cur_max = max(cur_max, arr[i][j]);
            int nj = j - 1;
            while (nj >= 0 && arr[i][nj] == 0)
            {
                is_move = true;
                arr[i][nj] = arr[i][nj + 1];
                arr[i][nj + 1] = 0;
                cur_max = max(cur_max, arr[i][nj]);
                nj -= 1;
            }
            nj += 1;
            if (nj > 0 && arr[i][nj - 1] == arr[i][nj] && !merged[i][nj - 1])
            {
                is_move = true;
                cur_max = max(cur_max, arr[i][nj - 1] *= 2);
                arr[i][nj] = 0;
                merged[i][nj - 1] = true;
            }
        }
    }
    return is_move;
}

inline bool move_down()
{
    cur_max = ires;
    bool is_move = false, merged[MAX][MAX] = {false};
    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == 0)
            {
                continue;
            }
            cur_max = max(cur_max, arr[i][j]);
            int ni = i + 1;
            while (ni < n && arr[ni][j] == 0)
            {
                is_move = true;
                arr[ni][j] = arr[ni - 1][j];
                arr[ni - 1][j] = 0;
                cur_max = max(cur_max, arr[ni][j]);
                ni += 1;
            }
            ni -= 1;
            if (ni < n - 1 && arr[ni + 1][j] == arr[ni][j] && !merged[ni + 1][j])
            {
                is_move = true;
                cur_max = max(cur_max, arr[ni + 1][j] *= 2);
                arr[ni][j] = 0;
                merged[ni + 1][j] = true;
            }
        }
    }
    return is_move;
}

inline bool move_right()
{
    cur_max = ires;
    bool is_move = false, merged[MAX][MAX] = {false};
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 2; j >= 0; j--)
        {
            if (arr[i][j] == 0)
            {
                continue;
            }
            cur_max = max(cur_max, arr[i][j]);
            int nj = j + 1;
            while (nj < n && arr[i][nj] == 0)
            {
                is_move = true;
                arr[i][nj] = arr[i][nj - 1];
                arr[i][nj - 1] = 0;
                cur_max = max(cur_max, arr[i][nj]);
                nj += 1;
            }
            nj -= 1;
            if (nj < n - 1 && arr[i][nj] == arr[i][nj + 1] && !merged[i][nj + 1])
            {
                is_move = true;
                cur_max = max(cur_max, arr[i][nj + 1] *= 2);
                arr[i][nj] = 0;
                merged[i][nj + 1] = true;
            }
        }
    }
    return is_move;
}

void rec(int num)
{
    if (res >= cur_max * 1 << num)
    {
        return;
    }
    if (num == 0)
    {
        if (cur_max > res)
        {
            res = cur_max;
        }
    }
    else
    {
        int copyed[MAX][MAX];
        memcpy(copyed, arr, SIZE);
        int next = num - 1;
        if (move_up())
        {
            rec(next);
            memcpy(arr, copyed, SIZE);
        }
        if (move_left())
        {
            rec(next);
            memcpy(arr, copyed, SIZE);
        }
        if (move_down())
        {
            rec(next);
            memcpy(arr, copyed, SIZE);
        }
        if (move_right())
        {
            rec(next);
        }
    }
}

int main()
{
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
            if (res < arr[i][j])
            {
                res = arr[i][j];
            }
        }
    }
    ires = res;
    cur_max = res;
    rec(ROUND);
    printf("%d", res);
    return 0;
}