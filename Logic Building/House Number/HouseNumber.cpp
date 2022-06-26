#include<bits/stdc++.h>
using namespace std;

#define int    int64_t
#define w(t)   int t; cin>>t; while(t--)


int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	w(t) {
		int n; cin >> n;
		int count = 0;

		for (int i = 1; i <= n; i = i * 10) {
			count += (n - i + 1);
		}

		cout << count << "\n";
	}
	return 0;
}