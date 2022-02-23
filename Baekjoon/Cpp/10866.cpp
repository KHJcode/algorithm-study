#include <iostream>
#include <vector>
#include <deque>

using namespace std;

int main() {
    vector<int> v;
    deque<int> d;
    int n, i, is;
    string run;
    scanf("%d", &n);
    while (n--) {
        is = d.empty();
        cin >> run;
        if (run == "push_back") {
            scanf("%d", &i);
            d.push_back(i);
        } else if (run == "push_front") {
            scanf("%d", &i);
            d.push_front(i);
        } else if (run == "pop_front") {
            if (is) v.push_back(-1);
            else {
                v.push_back(d.front());
                d.pop_front();
            }
        } else if (run == "pop_back") {
            if (is) v.push_back(-1);
            else {
                v.push_back(d.back());
                d.pop_back();
            }
        } else if (run == "front")
            v.push_back(is ? -1 : d.front());
        else if (run == "back")
            v.push_back(is ? -1 : d.back());
        else if (run == "size")
            v.push_back(d.size());
        else
            v.push_back(d.empty());
    }
    for (auto i: *&v)
        cout << i << "\n";
    return 0;
}
