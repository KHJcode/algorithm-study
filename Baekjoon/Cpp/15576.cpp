#include <bits/stdc++.h>

using namespace std;
using cpx = complex<double>;
using ll = long long;

void fft(vector<cpx> &v, cpx w) {
    cpx z(1, 0);
    ll i, n = v.size();
    if (n == 1) return;
    vector<cpx> even(n / 2), odd(n / 2);
    for(i = 0; i < n; i++) {
        if (i % 2) {
            odd[i / 2] = v[i];
        } else {
            even[i / 2] = v[i];
        }
    }
    fft(even, w * w);
    fft(odd, w * w);
    for(i = 0; i < n / 2; i++) {
        v[i] = even[i] + z * odd[i];
        v[i + n / 2] = even[i] - z * odd[i];
        z *= w;
    }
}

int main() {
    ll i, n;
    double PI = acos(-1);
    string f, g;
    cin >> f >> g;
    vector<ll> int_f, int_g, int_h(f.size() + g.size());
    for (i = f.size() - 1; i >= 0; i--) {
        int_f.push_back(f[i] - '0');
    }
    for (i = g.size() - 1; i >= 0; i--) {
        int_g.push_back(g[i] - '0');
    }
    n = 1;
    while (n <= f.size() || n <= g.size()) {
        n *= 2;
    }
    n *= 2;
    int_f.resize(n);
    int_g.resize(n);
    vector<cpx> cpx_f(n), cpx_g(n), cpx_h(n);
    for (i = 0; i < n; i++) {
        cpx_f[i] = cpx(int_f[i], 0);
        cpx_g[i] = cpx(int_g[i], 0);
    }
    cpx w(cos(2 * PI / n), sin(2 * PI / n));
    fft(cpx_f, w);
    fft(cpx_g, w);
    for (i = 0; i < n; i++) {
        cpx_h[i] = cpx_f[i] * cpx_g[i];
    }
    fft(cpx_h, cpx(1, 0) / w);
    for (i = 0; i < n; i++) {
        cpx_h[i] /= cpx(n, 0);
    }
    for (i = 0; i < int_h.size(); i++) {
        int_h[i] = round(cpx_h[i].real());
    }
    for (i = 0; i < int_h.size() - 2; i++) {
        int_h[i + 1] += int_h[i] / 10;
        int_h[i] %= 10;
    }
    if (int_h[int_h.size() - 1] != 0) {
        cout << int_h[i];
    }
    for (i = int_h.size() - 2; i >= 0; i--) {
        cout << int_h[i];
    }
    return 0;
}
