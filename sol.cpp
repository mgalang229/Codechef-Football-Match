#include <bits/stdc++.h>

using namespace std;

const int inf = 1e5 + 5;
string s[inf];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> s[i];
		}
		int cnt = 0;
		string a = s[0], b = "";
		for (int i = 0; i < n; i++) {
			if (s[i] == a) {
				cnt++;
			} else {
				b = s[i];
			}
		}
		if (cnt > (n - cnt)) {
			cout << a;
		} else if (cnt < (n - cnt)) {
			cout << b;
		} else {
			cout << "Draw";
		}
		cout << '\n';
	}
	return 0;
}
