#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007

vector<int> dp { 1 };

int solve(int n) {
	if (dp[n] != 0) return dp[n];

	for (int i = 1; i <= 6; ++i) {
		if(n-i>=0) dp[n] += solve(n-i);
		dp[n] %= MOD;
	}
	return dp[n];
}

int main() {
	cin.tie(0); ios_base::sync_with_stdio(0);

	int n; cin >> n;
	dp.resize(n+1);

	cout << solve(n) << endl;
	return 0;
}