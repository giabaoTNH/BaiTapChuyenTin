// Tac gia: Ha Nguyen Gia Bao
// Ngay: 3/2/2025
// Da sinh test!
#include <bits/stdc++.h>
using namespace std;

int dp[1000][1000];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	//f[1][i] = i;
	//f[i][1] = i;
	//f[i][i] = 1;
	//f[i][j]
	// if (i%j == 0) f[i][j] = i/j;
	// else f[i][j] = i/j + f[i][i%j];

	int m,n; cin >> m >> n;
	dp[0][0] = 0;
	for (int i = 1; i<=max(m,n); i++) dp[1][i] = dp[i][1] = i;
	for (int i = 1; i<=max(m,n); i++) dp[0][i] = dp[i][0] = 0;
	for (int i = 2; i<=max(m,n); i++) {
		for (int j = i; j<=max(m,n); j++) {
			if (i == j) dp[i][j] = 1;
			else dp[i][j] = dp[j][i] = j/i + dp[i][j%i];
		}
	}

	if (m > n) swap(m,n);
	cout << dp[m][n] << '\n';
				
	return 0;
}
//Code trau dung de sinh test:
//#include <bits/stdc++.h>
//using namespace std;
//
//int ketqua(int m, int n) {
//	if (m > n) swap(m,n);
//	if (m == 0) return 0;
//	if (m == 1) return n;
//	if (m == n) return 1;
//	if (n % m == 0) return n/m;
//	
//	return n/m + ketqua(m,n%m);
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int m,n; cin >> m >> n;
//	cout << ketqua(m,n) << '\n';
//
//	return 0;
//}

