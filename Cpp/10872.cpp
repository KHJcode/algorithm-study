#include <iostream>

using namespace std;

int getFactorial(int n) {
	if (n == 1 || n == 0)
		return 1;
	int result = n * getFactorial(n - 1);
	return result;
}

int main() {
	int a;
	cin >> a;
	cout << getFactorial(a);
	return 0;
}
