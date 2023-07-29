#include <bits/stdc++.h>
using namespace std;

void solve(long long n) {
	cout << n << ' ';

	if (n == 1) return;
	if (n % 2) solve(n * 3 + 1);
	else solve(n / 2);
}

int main() {
	cin.tie(0); ios_base::sync_with_stdio(0);
	long long n; cin >> n;
	solve(n);
}