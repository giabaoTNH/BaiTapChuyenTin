#include <bits/stdc++.h>
using namespace std;

long long n,k,sk,su,tu;
int a[100005];

long long pow(long long  a, long long b) {
	long long res = 1;
	while(b) {
		if (b&1) res = res*a;
		a = a*a;
		b/=2;
	}
	return res;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	memset(a,0,sizeof(a));
	
	cout << "Nhap N: " << flush;
	cin >> n;
	while (n > 1000000000) {
		cout << "N khong hop le, (N <= 10^9)\n";
		cout << "Nhap lai N: ";
		cout.flush();
		cin >> n;
	}
	
	cout << "Thua so nguyen to cua N la: " << flush;
	k = n;
	sk = sqrt(k);
	for (int i = 2; i<=sk; i++) {
		while(k % i == 0) {
			cout << i << ' ';
			a[i]+=1;
			k/=i;
		}
	}
	if (k > 1) {
		cout << k;
		a[k] += 1;
	}
	cout << endl;
	
	cout << "So uoc cua N: " << flush;
	su = 1;
	for (int i = 1; i<=sk; i++) {
		su *= (a[i]+1);
	}
	cout << su << endl;
	
	tu = 0;
	for (int i = 1; i<=sk; i++) {
		if (n%i == 0) {
			tu += i;
			if (n != i*i) tu+=n/i;
		}
	}
	cout << "Tong cac uoc cua N: " << tu << endl;
	
	return 0;
}
