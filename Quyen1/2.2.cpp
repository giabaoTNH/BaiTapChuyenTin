#include <bits/stdc++.h>
using namespace std;

vector<bool> sang(int n) {
	n = 1e7+7;
	vector<bool> isPrime(n+1);
	for (int i = 0; i<=n; i++) isPrime[i] = true;
	isPrime[0] = false;
	isPrime[1] = false;
	for (int i = 2; i<= sqrt(n); i++) {
		if (isPrime[i]) for (int j = i*i; j<=n; j+=i) {
			isPrime[j] = false;
		}
	}
	return isPrime;
}

vector<bool> isPrime;
vector<int> a;
int main() {
	ifstream cin("input.txt");
	ofstream cout("output.txt");
	int n; cin >> n;
	isPrime = sang(n);
	int m = n;
	for (int i = 2; i<= sqrt(n); i++) {
		if (!isPrime[i]) continue;
		while (n%i == 0) {
			cout << i << ' ';
			n/=i;
		}
	}
	if (n > 1) cout << n << endl;
	else cout << endl;
	long long sum = 0;
	int d = 0;
	for (int i = 1; i<=sqrt(m); i++) {
		if (m % i == 0) {
			sum += i;
			d++;
			if (i != m/i){
				sum += m/i;
				d++;
			}
		}
	}
	cout << sum << endl << d << endl;
	return 0;
}
