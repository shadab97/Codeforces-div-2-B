#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n , t;
	cin >> n >> t;
	string s;
	cin >> s;
	while (t--) {
		for (int i = 0; i < n - 1 ; i++) {
			if (s[i] == 'B' && s[i + 1] == 'G') {
				swap(s[i], s[i + 1]);
				i++;
			}
		}


	}
	cout << s << endl;


	return 0;
}


