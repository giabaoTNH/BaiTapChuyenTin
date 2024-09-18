#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll binMul(ll a, ll b, ll c) {
	a =a %c;
	ll res = 0;
	while(b) {
		if (b&1) res = (res+a)%c;
		a = (2*a)%c;
		b = b/2;
	}
	return res;
}

ll po(ll a, ll b, ll c) {
	a = a%c;
	ll res = 1;
	while(b) {
		if (b&1) res = binMul(res,a,c);
		a = binMul(a,a,c);
		b = b/2;
	}
	return res;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	long long k,m,n; cin>>k>>m>>n;
	long long mod = po(10,k,LLONG_MAX);
	cout << po(m,n,mod);

	return 0;
}

