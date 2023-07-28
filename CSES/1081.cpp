#pragma GCC optimize("O1")
#include <iostream>
#include <bitset>
using namespace std;

bitset<1000000> arr;
int main() {
	int n; cin >> n;
	int ans = 1;
	while (n--) {
		int k; cin >> k;

		for (int i = 1; i * i <= k; ++i)
			if (k % i == 0) {
				if (i > ans) {
					if (arr[i]) ans = i;
					else arr[i] = 1;
				}

				if (i != k / i && k / i > ans) {
					if (arr[k / i]) ans = k / i;
					else arr[k / i] = 1;
				}
			}
	}
	cout << ans;
}