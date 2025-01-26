#include <bits/stdc++.h>
using namespace std;

class Domino {
public:
	int a, b;
	int getCL() { return this->a-this->b; }
	int getCL_x() { return this->b-this->a; }
};

Domino a[22];
int ans;

void Try(int j, int sum, int cl, int n) {
	if (j >= n) {
		if (cl == 0) ans = min(ans, sum);
		return;
	}

	Try(j+1,sum, cl + a[j].getCL(), n);
	Try(j+1,sum+1, cl + a[j].getCL_x(), n);
}
		
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n; cin >> n;
	for (int i = 0; i<n; ++i) cin >> a[i].a >> a[i].b;

	ans = INT_MAX;
	Try(0,0,0,n);
	cout << ans << '\n';

	return 0;
	cl[i][j];
	cl[i][1];
	cl[i][0];
}

