#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007

int main() {
	cin.tie(0); ios_base::sync_with_stdio(0);

	int n, x; cin >> n >> x;
	vector<int> coins(n), dp(x + 1);
	for (int& c : coins) cin >> c;
	dp[0] = 1;

	for (int i = 1; i <= x; ++i)
	for (int j = 0; j < n; ++j)
		if (i - coins[j] >= 0)
			dp[i] = (dp[i] + dp[i-coins[j]]) % MOD;

	cout << dp[x] << endl;
	return 0;
}