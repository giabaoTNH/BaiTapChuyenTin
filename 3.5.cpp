#include <bits/stdc++.h>
using namespace std;

int ucln(int a, int b) {
	while(b) {
		int r = a%b;
		a = b;
		b = r;
	}
	return a;
}
class Frac {
public:
	int tu, mau;
	Frac() {
		tu = 0;
		mau = 1;
	}
	Frac(int x, int y) {
		int u = ucln(x,y);
		tu = x/u;
		mau = y/u;
	}
	Frac(int x) {
		tu = x;
		mau = 1;
	}
	
	bool operator< (Frac& b) {
		if (this->tu == b.tu) return (this->mau > b.mau);
		if (this->mau == b.mau) return (this->tu  < b.tu);
		return (this->tu * b.mau < this->mau * b.tu);
	}
	
	bool operator== (Frac &b) {
		return (this->tu == b.tu && this->mau == b.mau);
	}
};

bool comp(Frac a, Frac b) {
	return (a < b);
}

Frac a[100005], b[100005];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n,k; cin >> n >> k;
	int d = 0;
	for (int i = 0; i<=n; i++) {
		for (int j = i; j<=n; j++) {
			if (j == 0) continue;
			Frac t(i,j);
			a[d++] = t;
		}
	}
	
	sort(a, a+d, comp);
	Frac prev = a[0];
	b[0] = prev;
	int m = 1;
	for (int i = 0; i<d; i++) {
		if (!(prev == a[i]) ){
			prev = a[i];
			b[m++] = prev;
		}
	}
	
	//for (int i = 0; i<m; i++) {
	//	cout << b[i].tu << "|" << b[i].mau << endl;
	//}
	
	cout << b[k-1].tu << "|" << b[k-1].mau << endl;
	
	return 0;
}
