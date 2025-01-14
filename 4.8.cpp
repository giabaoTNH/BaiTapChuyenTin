#include <bits/stdc++.h>
using namespace std;

int n;
bool first;
int d,m;
bool x[100005];
int a[15],sums[100005],sums2[100005];
void Try(int j) {
	
	if (j >= n) {
		if (first) {
			first = false;
			return;
		}
		int sum = 0;
		for (int i = 0; i<n; i++) {
			sum += a[i]*x[i];
		}
		sums[d++] = sum;
		return;
	}
	x[j] = 0; Try(j+1);
	x[j] = 1; Try(j+1);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> n;
	for (int i = 0; i<n; i++) cin >> a[i];
	
	d = 0;
	first = true;
	Try(0);
	
	sort(sums, sums+d);
	sums[++d] = INT_MIN;
	int prev = sums[0];
	m = 0;
	for (int i = 0; i<d; i++) {
		if (prev != sums[i]) {
			sums2[m++] = prev;
			prev = sums[i];
		}
	}
	//for (int i = 0; i<m; i++) cout << sums2[i] << endl;
	int ans = 1;
	for (int i = 0; i<m; i++) {
		if (ans != sums2[i]) {
			cout << ans << endl;
			return 0;
		}
		ans = sums2[i]+1;
	}
	cout << ans << endl;
	
	return 0;
}
