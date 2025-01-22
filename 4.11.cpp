#include <bits/stdc++.h>
using namespace std;

#define ll  unsigned long long
#define fr(i,a,b) for(ll i = a; i <= b; ++i)
ll binaryMul(ll a, ll b, ll n)
{
    a = a % n;
    ll res = 0;
    while (b)
    {
        if (b & 1)
            res = (res + a) % n;
        a = (2 * a) % n;
        b /= 2;
    }
    return res;
}

// Tính a^b mod n
ll po(ll a, ll k, ll n)
{
    a = a % n;
    ll res = 1;
    while (k)
    {
        if (k & 1)
            res = binaryMul(res, a, n);
        a = binaryMul(a, a, n) % n;
        k /= 2;
    }
    return res;
}


bool fer(ll n)
{
	if (n < 7)
		return n == 2 || n == 3 || n == 5;

	static const ll repeatNum = 5;
	for (int i = 0; i < repeatNum*25; ++i)
	{
		ll a = rand() % (n - 3) + 2;
		if (po(a, n - 1, n) != 1)
			return false;
	}
	return true;
}
void Try(int j, long long num, int n) {
  if (num != 0 && !fer(num)) return;
  if (j >= n) {
    cout << num << endl;
    return;
  }

  for (int i = 1; i<=9; i++) {
    Try(j+1,num*10+i,n);
  }
}


int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n; cin >> n;
  Try(0,0,n);

  return 0;
}
