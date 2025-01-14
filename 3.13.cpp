#include <bits/stdc++.h>
using namespace std;

map<int,int> mp;
int cd[100005],a[100005];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n; cin >> n;
	for (int i = 0; i<n; i++) cin >> a[i];
	cd[0] = 0;
	for (int i = 1; i<=n; i++) {
		cd[i] = cd[i-1]+a[i-1];
		mp[cd[i]] = -1;
	}
	
	int m = INT_MIN;
	int x = -1, y = -1;
	for (int i = 1; i<=n; i++) {
		if (cd[i] == 0) {
			if (i > m) {
				m = i;
				x = 1;
				y = i;
			}
			continue;
		}
		if (mp[cd[i]] != -1) {
			int sl = i - mp[cd[i]];
			if (sl > m) {
				m = sl;
				x = mp[cd[i]] + 1;
				y = i;
			}
		}
		else if (mp[cd[i]] == -1) {
			mp[cd[i]] = i;
		}
	}
	
	cout << m << endl;
	cout << x << ' ' << y << endl;
	
	return 0;
} 
