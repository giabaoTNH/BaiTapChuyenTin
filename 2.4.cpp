#include <bits/stdc++.h>
using namespace std;

long long N, L, R, sqrtR, sqrtR2;
bool isPrime[10000007], cR[10000007];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> L >> R;
	N = R-L+1;
	
	sqrtR = sqrt(R);
	sqrtR2 = sqrt(sqrt(R));
	
	memset(cR, 1, sizeof(cR));
	cR[0] = 0;
	cR[1] = 0;
	
	for (long long i = 2; i <= sqrtR2; i++) if (cR[i])
		for (long long j = i*i; j<=sqrtR; j+=i) cR[j] = false;
		
	memset(isPrime,1,sizeof(isPrime));
	for (long long i = 2; i<= sqrtR; i++) if (cR[i])
		for (long long j = max(i*i, ((L+i-1)/i)*i); j<=R; j+=i) isPrime[j-L] = false;
	if (L == 1) isPrime[0] = false;
	
	for (int i = L; i<=R; i++) if (isPrime[i-L]) cout << i << endl;
	
}
