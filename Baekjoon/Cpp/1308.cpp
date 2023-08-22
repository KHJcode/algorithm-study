#include <bits/stdc++.h>

using namespace std;

bool is_leap_year(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int get_days(int y, int m, int d)
{
    int i, days = 0;
    for (i = 1; i < y; i++)
    {
        days += 365 + is_leap_year(i);
    }
    for (i = 1; i < m; i++)
    {
        if (i == 2)
        {
            days += 28 + is_leap_year(y);
        }
        else
        {
            days += 30 + (i <= 7 ? i % 2 : !(i % 2));
        }
    }
    days += d;
    return days;
}

int main()
{
    int cy, cm, cd, dy, dm, dd;
    cin >> cy >> cm >> cd >> dy >> dm >> dd;
    if (cy + 1000 < dy || (cy + 1000 == dy && cm > dm) || (cy + 1000 == dy && cm == dm && cd == dd))
    {
        cout << "gg";
    }
    else
    {
        cout << "D-" << get_days(dy, dm, dd) - get_days(cy, cm, cd);
    }
    return 0;
}
