#include <bits/stdc++.h>
using namespace std;

int n;
bool x[100005];
void Try(int j, int sl0, int sl1,int last) {
	if (last > 0) return;
	if (j >= n*2) {
		if (sl0 == sl1) {
			for (int i = 0; i<n*2; i++) cout << (x[i] ? ')' : '(');
			cout << endl;
		}
		return;
	}
	x[j] = 0; Try(j+1,sl0+1,sl1,last-1);
	x[j] = 1; Try(j+1,sl0,sl1+1,last+1);
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> n;
	Try(0,0,0,0);
	
	return 0;
}
