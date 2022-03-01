#include <iostream>

using namespace std;

int n, c, arr[15];

int promise(int d) {
    for (int i = 0; i < d; i++)
        if (arr[d] == arr[i] || abs(arr[d] - arr[i]) == d - i)
            return 0;
    return 1;
}

void nqueen(int d) {
    if (n == d)
        c++;
    else {
        for (int i = 0; i < n; i++) {
            arr[d] = i;
            if (promise(d))
                nqueen(d + 1);
        }
    }
}

int main() {
    scanf("%d", &n);
    nqueen(0);
    cout << c;
    return 0;
}
