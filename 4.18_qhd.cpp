#include <bits/stdc++.h>
using namespace std;

class Domino {
public:
	int a, b;
	int getCL() { return this->a-this->b; }
	int getCL_x() { return this->b-this->a; }
};

Domino a[22];


vector<pair<int,int> > dp[22];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n; cin >> n;
	for (int i = 0; i < n; ++i) cin >> a[i].a >> a[i].b;

	dp[0].push_back(make_pair(a[0].getCL(), 0));
	dp[0].push_back(make_pair(a[0].getCL_x(),1));

	for (int i = 1; i < n; ++i) {
		for (pair<int,int> u:dp[i-1]) {
			pair<int,int> p = make_pair(u.first+a[i].getCL(), u.second);
			dp[i].push_back(p);
			pair<int,int> p2 = make_pair(u.first+a[i].getCL_x(), u.second+1);
			dp[i].push_back(p2);
		}
	}

	int ans = INT_MAX;
	for (pair<int,int> u : dp[n-1]) {
		if (u.first == 0) ans = min(ans, u.second);
	}
	cout << ans << '\n';
	return 0;
}
