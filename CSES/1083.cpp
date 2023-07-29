#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
template<typename T> istream& operator>>(istream& in, vector<T>& a) { for (auto& x : a) in >> x; return in; };

int main() {
	cin.tie(0); ios_base::sync_with_stdio(0);
	int n; cin >> n;
	vi arr(n + 1);
	for (int i = 1; i < n; ++i) {
		int x; cin >> x;
		arr[x] = 1;
	}

	for (int i = 1; i <= n; ++i) {
		if (!arr[i]) {
			cout << i;
			return 0;
		}
	}
}