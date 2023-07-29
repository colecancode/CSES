#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
template<typename T> istream& operator>>(istream& in, vector<T>& a) { for (auto& x : a) in >> x; return in; };

int main() {
	cin.tie(0); ios_base::sync_with_stdio(0);
	int n; cin >> n;
	vi a(n); cin >> a;

	long long ans = 0;
	for (int i = 1; i < n; ++i) {
		int x = max(0, a[i-1] - a[i]);
		ans += x;
		a[i] += x;
	}
	cout << ans;
}