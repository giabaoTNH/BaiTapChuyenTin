#include <bits/stdc++.h>
using namespace std;
vector<bool> sang(int n) {
	vector<bool> isPrime(n+1,true);
	isPrime[0] = false;
	isPrime[1] = false;
	for (int i = 2; i<=sqrt(n); i++) {
		if (isPrime[i]) for (int j=i*i; j<=n;j+=i)
			isPrime[j] = false;
	}

	return isPrime;
}
vector<bool> isPrime;
int binMul(int a, int b, int c) {
	a = a%c;
	int res = 0;
	while(b) {
		if (b&1) res = (res+a)%c;
		a = (2*a) % c;
		b = b /2;
	}
	return res;
}

int po(int a, int b, int c) {
	a =a %c;
	int res = 1;
	while(b) {
		if (b&1) res = binMul(a,res,c);
		a = binMul(a,a,c)%c;
		b/=2;
	}
	return res;
}

bool fermat(int n) {
	if (po(2,n,n) == 2) return true;
	return false;
}

int main() {
	isPrime = sang(1000000);
	for (int i = 2; i<=1000000; i++) {
		if (isPrime[i] != fermat(i)) cout << i << ' ';
	}
	cout << isPrime[2] << endl;
	cout << fermat(341) << endl;
	cout << endl;
}

