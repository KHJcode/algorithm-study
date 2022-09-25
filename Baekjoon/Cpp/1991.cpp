#include <bits/stdc++.h>

using ll = long long;
using namespace std;

ll arr[10000];

ll to_ll(char c) {
    return ll(c) - 65;
}

void print(ll x) {
    cout << char(x + 65);
}

void preorder(ll x) {
    print(arr[x]);
    ll left = x * 2 + 1;
    if (arr[left]) {
        preorder(left);
    }
    ll right = x * 2 + 2;
    if (arr[right]) {
        preorder(right);
    }
}

void inorder(ll x) {
    ll left = x * 2 + 1;
    if (arr[left]) {
        inorder(left);
    }
    print(arr[x]);
    ll right = x * 2 + 2;
    if (arr[right]) {
        inorder(right);
    }
}

void postorder(ll x) {
    ll left = x * 2 + 1;
    if (arr[left]) {
        postorder(left);
    }
    ll right = x * 2 + 2;
    if (arr[right]) {
        postorder(right);
    }
    print(arr[x]);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, i, a, b, c, map[27];
    char _a, _b, _c;
    cin >> n;
    map[0] = 0;
    arr[0] = 0;
    for (i = 0; i < n; i++) {
        cin >> _a >> _b >> _c;
        a = to_ll(_a);
        if (_b != '.') {
            b = to_ll(_b);
            map[b] = map[a] * 2 + 1;
            arr[map[b]] = b;
        }
        if (_c != '.') {
            c = to_ll(_c);
            map[c] = map[a] * 2 + 2;
            arr[map[c]] = c;
        }
    }
    preorder(0);
    cout << "\n";
    inorder(0);
    cout << "\n";
    postorder(0);
    return 0;
}
