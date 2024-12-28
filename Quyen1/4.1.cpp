#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 7;

ll n,k,d;
char s[N][100];
vector<int> x;

void Try(ll j) {
	//  Điều kiện dừng là j > k;
	if (j > k) {
		//  In các bạn trong danh sách ra
		cout <<	++d <<". ";  
		for (int i = 0; i < k; ++i) cout << s[x[i]] << ' ';
		cout << '\n';
	} else {
		ll last = (x.size() ? x.back() : -1);
		for (ll i = last+1; i<n; i++) {
			x.push_back(i);
			Try(j+1);
			x.pop_back();
		}
	}
}

ll nCk(ll n, ll k) {
	ll tu = 1, mau = 1;
	for (ll i = n-k+1; i<=n; i++) tu*=i;
	for (ll i = 1; i<=k; i++) mau*=i;
	return (tu/mau);
}
			

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);

	cin >> n >> k;
	for (int i = 0; i<n; i++) cin >> s[i];

	cout << "Co " << nCk(n,k) << " cach chon " << k << " ban" << endl;
	d = 0;
	Try(1);

	return 0;
}
