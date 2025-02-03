// Tac gia: Ha Nguyen Gia Bao
// Ngay: 3/2/2025
// Chua sinh test
#include <bits/stdc++.h>
using namespace std;

bool visited[1000][1000];
int cd[1000][1000],a[1000][1000];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	//freopen("a.inp", "r", stdin); freopen("a.out","w",stdout);

	int n; cin >> n;
	for (int i =0;i <n; i++) {
		for (int j = 0; j<n; j++) cin >> a[i][j];
	}

	for (int i = 0; i<=n; i++) cd[i][0] = cd[0][i] = 0;
	for (int i =1; i<=n; i++) 
		for (int j = 1; j<=n; j++) cd[i][j] = cd[i-1][j] + cd[i][j-1] - cd[i-1][j-1] + a[i-1][j-1];
	for (int i = 1; i<=n; i++) {
		for (int j = 1; j<=n; j++) cout << cd[i][j] << ' ';
		cout << '\n';
	}

	int ans=0;
	for (int i = 1; i<=n; i++) {
		for (int j = 1; j<=n; j++) {
			if (visited[i][j]) continue;
			ans+=1;
			int t1,t2,t3,t4;
			t1 = t2 = t3 = t4 = 0;
			for (int x = i; x <=n; x++) {
				for (int y = j; y <= n; y++) {
					int sum = cd[x][y] - cd[i-1][y] - cd[x][j-1] + cd[i-1][j-1];
					//cout << sum << endl;
					if (sum == (x-i+1)*(y-j+1) || sum == 0) {
						t1 = i; t2 = j; t3 = x; t4 = y; 
					}
				}
			}
			for (int k = t1; k<=t3; k++) for (int l = t2; l<=t4; l++) visited[k][l] = true;
			cout << "i : " << i << ", j : " << j << ": " << t1 << ' ' << t2 << ' ' << t3 << ' ' << t4 << endl;
		}
	}
	cout << ans << endl;


	return 0;
}

