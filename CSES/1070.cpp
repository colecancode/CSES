#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
template<typename T> istream& operator>>(istream& in, vector<T>& a) { for (auto& x : a) in >> x; return in; };

int main() {
	cin.tie(0); ios_base::sync_with_stdio(0);
	int n; cin >> n;

	if (n < 4 && n > 1) {
		cout << "NO SOLUTION";
		return 0;
	}

	vi ans(n);
	int cnt = 1;
	for (int i = 1; i < n; i += 2)
		ans[i] = cnt++;
	for (int i = 0; i < n; i += 2)
		ans[i] = cnt++;

	for (int x : ans) cout << x << ' ';
}