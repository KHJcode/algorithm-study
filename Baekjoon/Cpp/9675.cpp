#include <iostream>
using namespace std;

int arr[1001] = { 0, 1, 0, 1, 1 };

int main()
{
  int n, i;
  scanf("%d", &n);
  for (i = 5; i <= n; i++) {
    arr[i] = !arr[i - 1] || !arr[i - 3] || !arr[i - 4];
  }
  cout << (arr[n] ? "SK" : "CY");
  return 0;
}
