#include <bits/stdc++.h>
using namespace std;

bool x[22];
long long ans, a[22], c[22];

void Try(int j, long long sum, long long n, long long w) {
	if (sum > w) return;
	if (j >= n) {
		long long s = 0;
		for (int i = 0; i<n; ++i) s += c[i]*x[i];
		ans = max(s,ans);
		return;
	}

	x[j] = 1;
	Try(j+1,sum+a[j],n,w);
	x[j] = 0;
	Try(j+1,sum,n,w);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long n,w; cin >> n >> w;
	for (int i = 0; i<n; ++i) cin >> a[i] >> c[i];

	ans = LLONG_MIN;
	Try(0,0,n,w);
	cout << ans << '\n';

	return 0;
}	
