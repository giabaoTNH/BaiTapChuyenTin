#include<bits/stdc++.h>
using namespace std;

char a[5][5];
bool dp[39];
int ans;

void Try(int k, int sum) {
	if (k >= 16) {
		char t[5][5];
		for (int i = 1; i<=4; ++i)
			for (int j = 1; j<=4; ++j) t[i][j] = a[i][j];
		for (int i = 0; i < 16; ++i) {
			if (dp[i] == 0) continue;
			int x = i/4 + 1;
			int y = i%4 + 1;
			int g = (int('b') ^ int('w'));
			t[x][y] = char((int)(t[x][y])^g);
			if (x+1 <= 4) t[x+1][y] = char((int)(t[x+1][y])^g);
			if (x-1 > 0) t[x-1][y] = char((int)(t[x-1][y])^g);
			if (y+1 <= 4) t[x][y+1] = char((int)(t[x][y+1])^g);
			if (y-1 > 0) t[x][y-1] = char((int)(t[x][y-1])^g);
		}
		int sum2 = 0;
		for (int i = 1; i<=4; ++i)
			for (int j = 1; j<=4; ++j) sum2 += (t[i][j] == 'w');
		if (sum2 == 0 || sum2 == 16) ans = min(ans,sum);
		return;
	}

	dp[k] = 0;
	Try(k+1,sum);
	dp[k] = 1;
	ry(k+1,sum+1);
	return;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	freopen("COIN.INP","r",stdin);

	for (int i = 1; i <= 4; ++i)
		for (int j = 1; j <= 4; ++j) cin >> a[i][j];
	for (int i = 1; i <= 4; ++i) {
		for (int j = 1; j <= 4; ++j) cout << a[i][j];
		cout << '\n';
	}

	ans = INT_MAX;
	Try(0,0);
	cout << ans << '\n';

	return 0;
}
