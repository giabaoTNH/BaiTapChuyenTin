#include <bits/stdc++.h>
using namespace std;

int ans, x[100], a[100][100];
bool cc[100],cp[100],ngang[100];
void Try(int j) {
	if (j > 8) {
		int sum = 0;
		for (int i = 1; i<=8; i++) sum += a[x[i]][i];
		ans = max(ans,sum);
		return;
	}

	for (int i = 1; i<=8; i++) {
		if (!ngang[i] && !cc[i+j] && !cp[i-j+10]) {
			ngang[i] = true;
			cc[i+j] = true;
			cp[i-j+10] = true;
			x[j] = i;
			Try(j+1);
			ngang[i] = false;
			cc[i+j] = false;
			cp[i-j+10] = false;
		}
	}
}
		
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("4.16.inp", "r", stdin);
	for (int i = 1; i<=8; i++)
		for (int j = 1; j<=8; ++j) cin >> a[i][j];

	ans = INT_MIN;
	memset(cp,0,sizeof(cp));
	memset(cc,0,sizeof(cc));
	memset(ngang,0,sizeof(ngang));
	Try(1);
	cout << ans << '\n';

	return 0;
}
