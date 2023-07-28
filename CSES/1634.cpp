#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0); ios_base::sync_with_stdio(0);

	int n, x;
	cin >> n >> x;
	vector<int> coins(n), dp(x + 1, 1e7);
	dp[0] = 0;
	for (int& c : coins) cin >> c;

	for (int i = 1; i <= x; ++i)
	for (int k = 0; k < n; ++k)
		if (i - coins[k] >= 0) dp[i] = min(dp[i], dp[i - coins[k]] + 1);

	cout << (dp[x] < 1e7 ? dp[x] : -1) << endl;
	return 0;
}