#include <iostream>
#include <string.h>
#include <stack>

using namespace std;

stack<int> s;

int getTop(void) {
    return (s.empty()) ? -1 : s.top();
}

int main(void)
{
    int n, i, j = 0;
    int arr[100000];
    string result;
 
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        while (getTop() != arr[i]) {
            j += 1;
            if (j > n) {
                result = "NO";
                break;
            }
            s.push(j);
            result += "+\n";
        }
        if (j <= n) {
            s.pop();
            result += "-\n";   
        }
    }
    cout << result;

    return 0;
}
