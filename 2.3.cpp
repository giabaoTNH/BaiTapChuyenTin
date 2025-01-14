#include <bits/stdc++.h>
using namespace std;
const int N = 1000000;

bool isPrime[N+100];
bool isPrime2[N+100];

int binMul(int a, int b, int c) {
	int res = 0;
	a = a % c;
	while(b) {
		if (b&1) res = (res+a)%c;
		a = (a << 1) % c;
		b >>= 1;
	}
	return res;
}

int po(int a, int b, int c) {
	int res = 1;
	a = a%c;
	while(b) {
		if (b&1) res = binMul(res,a,c) % c;
		a = binMul(a,a,c) %c;
		b >>= 1;
	}
	return res;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	memset(isPrime, 1, sizeof(isPrime));
	isPrime[0] = 0;
	isPrime[1] = 0;
	
	int sN = sqrt(N);
	for (int i = 2; i<=sN; i++) if (isPrime[i]) 
		for (int j = i*i; j<=N; j+=i) isPrime[j] = false;
	
	isPrime2[0] = 0;
	isPrime2[1] = 0;
	for (int i = 2; i<=N; i++) {
		isPrime2[i] = (po(2,i,i) == 2);
	}
	
	
	cout << "Cac so sai cua Fermat: " << endl;
	for (int i = 0; i<= N; i++) {
		if (isPrime[i] != isPrime2[i])cout << i << ' ';
	}
	cout << endl;
	
	//cout << po(2,11,11) << endl;
	
	
	return 0;
}
