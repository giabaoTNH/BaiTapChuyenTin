#include <bits/stdc++.h>
using namespace std;
#define ll long long

string to_str(int x) {
	string ans = "";
	while(x>0) {
		ans = (char)(x%10 + 48) + ans;
		x/=10;
	}
	return ans;
}

int dem[100];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	//freopen("file.inp", "r", stdin);
	//freopen("file.out", "w", stdout);
	
	int n,k; cin >> n >> k;
	string m = "";
	for (int i = 1; i<=n; i++) {
		string s = to_str(i);
		m = m+s;
	}
	//cout << m << endl;
	
	memset(dem,0,sizeof(dem));
	for (int i = 0; i<m.size(); i++) {
		dem[m[i]-48] += 1;
	}
	//for (int i = 0; i<=9; i++) cout << i << ":" << dem[i] << endl;
	int i = 0;
	while (k > 0) {
		k-=dem[i];
		dem[i] = 0;
		i++;
	}
	if (k < 0) dem[i-1] = -k;
	string ans = "";
	//for (int i = 0; i<=9; i++) cout << i  << ":" << dem[i] << endl;
	for (int i = m.size() - 1; i>=0;i--) {
		if (dem[m[i]-48] > 0) {
			ans = m[i] + ans;
			dem[m[i]-48] -= 1;
		}
	}
	cout << ans << endl;
	
	
	
	return 0;
}
