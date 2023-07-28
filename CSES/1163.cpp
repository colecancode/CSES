#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0); ios_base::sync_with_stdio(0);
	int x, n; cin >> x >> n;
	set<int> lights;
	lights.insert(0);
	lights.insert(x);
	multiset<int> segments;
	segments.insert(x);

	while (n--) {
		int pos; cin >> pos;
		auto it = lights.upper_bound(pos);
		--it;
		int a = *it;
		int b = *next(it);
		lights.insert(pos);

		segments.erase(segments.find(b - a));
		segments.insert(pos - a);
		segments.insert(b - pos);

		cout << *rbegin(segments) << ' ';
	}
	return 0;
}