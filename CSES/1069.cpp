#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
template<typename T> istream& operator>>(istream& in, vector<T>& a) { for (auto& x : a) in >> x; return in; };

int main() {
	cin.tie(0); ios_base::sync_with_stdio(0);
	string s; cin >> s;

	int n = size(s);
	int ans = 1, cur = 1;
	for (int i = 1; i < n; ++i) {
		if (s[i] == s[i - 1]) ans = max(ans, ++cur);
		else cur = 1;
	}
	cout << ans;
}