#include <bits/stdc++.h>
using namespace std;

long long f[1000000];

int main() 
{
	int n; cin >> n;

	f[1] = 1;
	f[2] = 1;
	for (int i = 3; i<=n+2; i++) 
	{
		f[i] = f[i-1] + f[i-2];
	}

	cout << f[n+2] << endl;

	return 0;
}

