#include <bits/stdc++.h>
using namespace std;

int mul(int x, int y, int m) {
	return (x * 1LL * y) % m;
}

void test_case(int& tc) {
	int n, m;
	cin >> n >> m;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	if (n > m) {
		cout << "0\n";
		return;
	}
	int ans = 1;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++)
			ans = mul(ans, abs(a[i] - a[j]), m) % m;
	}
	cout << ans << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int T = 1;
//	cin >> T;
	for (int tc = 1; tc <= T; tc++)
		test_case(tc);
}
