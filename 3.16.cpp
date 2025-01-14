#include <bits/stdc++.h>
using namespace std;

int a[1003][1003];
int c[1003];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	freopen("WMT.inp", "r", stdin);
	freopen("WMT.out", "w", stdout);
	
	int m,n; cin >> m >> n;
	for (int i = 0; i<m; i++) 
		for (int j = 0; j<n; j++) cin >> a[i][j];
	
	for (int i = 0; i<m; i++) sort(a[i], a[i]+n);
	
	int ans = 0;
	for (int i = 0; i<m-1; i++) {
		for (int j = i+1; j<m; j++){
			int s = 0;
			int x = 0, y = 0;
			int d = 0;
			while (x < n && y < n) {
				if (a[i][x] == a[j][y]) {
					c[d++] = a[i][x];
					c[d++] = a[j][y];
					x+=1; y+=1;
					continue;
				}
				if (a[i][x] < a[j][y]) c[d++] = a[i][x++];
				else c[d++] = a[j][y++];
			}
			while(x<n) {c[d++] = a[i][x++];}
			while(y<n) {c[d++] = a[j][y++];}
			int xij = c[(d-1)/2];
			for (int k = 0; k<d; k++) s += abs(c[k]-xij);
			ans += s;
		}
	}
	
	cout << ans << endl;
	
	
	
	return 0;
}
