// sua de:
// Tim cach tac dong vao it cong tac nhat sao cho nhieu den sang nhat
#include <bits/stdc++.h>
using namespace std;

bool x[22], ans[22][22];
int ma, ma2;

void Try(int k) {
	if (k >= 20) {
		bool a[100][100];
		for (int i = 1; i <= 10; ++i)
			for (int j = 1; j <= 10; ++j) a[i][j] = 0;
		for (int i = 0; i < 20; ++i) {
			if (x[i] == 0) continue;
			if (i < 10) for (int j = 1; j<=10; j++) a[j][i+1]^=1;
			else for (int j = 1; j<=10; ++j) a[i-9][j] ^= 1;
		}
		int dem = 0;
		int dem2 = 0;
		for (int i = 1; i <= 10; ++i) {
			for (int j = 1; j <= 10; ++j) dem += a[i][j];
		}

		for (int i = 0; i<20; ++i) dem2 += x[i];
		if (dem > ma && dem2 < ma2) {
			ma = dem;
			for (int i = 1; i <= 10; ++i) {
				for (int j = 1; j <= 10; ++j) ans[i][j] = a[i][j];
			}
			ma2 = dem2;
		}
		return;
	}
	x[k] = 1;
	Try(k+1);
	x[k] = 0;
	Try(k+1);
}
				

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	ma = INT_MIN;
	ma2 = INT_MAX;
	Try(0); 
	cout << "So bong den sang nhieu nhat: " << ma << endl;
	cout << "So cong tac it nhat: " << ma2 << endl;
	for (int i = 1; i<=10; ++i) {
		for (int j = 1; j<=10; ++j) cout << ans[i][j];
		cout << endl;
	}

	return 0;
}
