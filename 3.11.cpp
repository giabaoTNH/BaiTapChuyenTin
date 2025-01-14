#include <bits/stdc++.h>
using namespace std;

class Vector {
public:
	int x,y;
	Vector(int x1, int y1, int x2, int y2) {
		x = x2-x1;
		y = y2-y1;
	}
	
	bool operator| (Vector b) {
		return (this->x * b.x + this->y * b.y == 0);
	}
};

pair<int,int> a[100005];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n; cin >> n;
	for (int i= 0; i<n; i++) cin >> a[i].first >> a[i].second;
	int ans = 0;
	sort(a, a+n);
	for (int i = 0; i<n-3; i++)
		for (int j = i+1; j<n-2; j++)
			for (int k = j+1; k < n-1; k++) {
				Vector xi(a[i].first, a[i].second, a[j].first, a[j].second);
				Vector yi(a[i].first, a[i].second, a[k].first, a[k].second);
				Vector xj(a[j].first, a[j].second, a[i].first, a[i].second);
				Vector yj(a[j].first, a[j].second, a[k].first, a[k].second);
				Vector xk(a[k].first, a[k].second, a[i].first, a[i].second);
				Vector yk(a[k].first, a[k].second, a[j].first, a[j].second);
				
				pair<int,int> p;
				
				if (xi | yi) {
					p.first = a[i].first + xi.x + yi.x;
					p.second = a[i].second + xi.y + yi.y;
					
					int count = upper_bound(a+k+1, a+n, p) - lower_bound(a+k+1,a+n,p);
					ans+=count;
				}
				else if (xj | yj) {
					p.first = a[j].first + xj.x + yj.x;
					p.second = a[j].second + xj.y + yj.y;
					
					int count = upper_bound(a+k+1, a+n, p) - lower_bound(a+k+1,a+n,p);
				}
				else if (xk | yk) {
					p.first = a[k].first + xk.x + yk.x;
					p.second = a[k].second + xk.y + yk.y;
					
					int count = upper_bound(a+k+1, a+n, p) - lower_bound(a+k+1,a+n,p);
				}
			}
	cout << ans << endl;
	
	return 0;
}
