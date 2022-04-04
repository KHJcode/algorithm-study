#include <bits/stdc++.h>

#define MIN 104

using namespace std;

int arr[MIN];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, i, j, r;
    vector<int> v;
    for (i = 2; i * i < MIN; i++)
        if (!arr[i])
            for (j = i * i; j < MIN; j += i)
                arr[j] = 1;
    for (i = 2; i < MIN; i++)
        if (!arr[i])
            v.push_back(i);
    cin >> n;
    for (i = 1; i < v.size(); i++) {
        r = v[i] * v[i - 1];
        if (r > n)
            break;
    }
    cout << r;
    return 0;
}
