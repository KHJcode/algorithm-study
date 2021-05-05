#include <iostream>

using namespace std;

int main() {
	int i, n, t, dp[11];
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;
	
	cin >> n;
	
	for (i = 4; i < 12; i++)
		dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];

	for (i = 0; i < n; i++) {
		cin >> t;
		cout << dp[t] << '\n';
	}

	return 0;
}
