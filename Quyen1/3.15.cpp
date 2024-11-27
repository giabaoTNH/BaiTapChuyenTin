#include <bits/stdc++.h>
using namespace std;

int n;
string s[1000000];

bool comp (string s1, string s2) 
{
	return s1 > s2;
}

int main() 
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	cin >> n;
	for (int i = 1; i<=n; i++) cin >> s[i];
	sort(s+1,s+n+1,comp);
	for (int i = 1; i<=n; i++) cout << s[i];
	cout << endl;
}
