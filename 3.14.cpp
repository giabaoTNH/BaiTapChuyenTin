#include <bits/stdc++.h>
using namespace std;

int cd[100005], a[100005];
map<int,int> mp;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	freopen("ESEQ.inp", "r", stdin);
	freopen("ESEQ.out", "w", stdout);
	
	int n; cin >> n;
	for (int i = 1; i<=n ;i++) {
		cin >> a[i];
	}
	
	cd[n+1] = 0;
	for (int i = n; i>0; i--) {
		cd[i] = cd[i+1] + a[i];
		mp[cd[i]] += 1;
	}
	
	int s = 0;
	int ans = 0;
	for (int i = 1; i<=n; i++) {
		mp[cd[i]] -= 1;
		s += a[i];
		ans += mp[s];
	}
	cout << ans << endl;
	;
	return 0;
}
