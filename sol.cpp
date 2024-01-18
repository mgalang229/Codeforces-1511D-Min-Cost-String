#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void test_case(int& tc) {
	int n, k;
	cin >> n >> k;
	int first = -1, second = 0;
	for (int i = 0; i < n; i++) {
		if (second % k == 0) {
			first = (first + 1) % k;
			cout << char('a' + first);
			second = first + 1;
		} else {
			cout << char('a' + first);
			if (i < n - 1) {
				cout << char('a' + second);
			}
			second++;
			i++;
		}
	}
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T = 1;
	// cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		test_case(tc);
	}
}
