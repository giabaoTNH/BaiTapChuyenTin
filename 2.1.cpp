#include <bits/stdc++.h>
using namespace std;

const int N = 10000;
const int LGN = 63;

int lab[100];
int lg(int n) { return 31 - __builtin_clz(n); }
class BigNum {
public:
	string a = "";
	BigNum() {
		a = "0";
	}
	BigNum(int x) {
		a = "";
		while(x > 0) {
			a = (char)(x%10 + 48) + a;
			x/=10;
		}
	}
	BigNum (string s) {
		a = s;
	}
	
	BigNum operator+ (BigNum& b) {
		string ans = "";
		int carry = 0;
		int i = this->a.size() - 1;
		int j = b.a.size() - 1;
		string &x = this->a;
		string &y = b.a;
		
		while (i >= 0 && j >= 0) {
			int sum = (x[i]-48) + (y[j]-48) + carry;
			carry = sum / 10;
			ans = (char)(sum%10 + 48) + ans;
			i-=1;
			j-=1;
		}
		while (i >= 0) {
			int sum = (x[i]-48) + carry;
			carry = sum/10;
			ans = (char)(sum%10 + 48) + ans;
			i-=1;
		}
		while (j >= 0) {
			int sum = (y[j]-48) + carry;
			carry = sum/10;
			ans = (char)(sum%10 + 48) + ans;
			j-=1;
		}
		if (carry > 0) ans = '1'+ans;
		return BigNum(ans);
	}
};

int df[N], sp[N][LGN];

void make(int n) {
	for (int i = 1; i<=n; ++i) sp[i][0] = df[i];
	for (int j = 1; j<=lg(n); ++j) {
		for (int i = 1; i + (1 << j) - 1 <=n; ++i) {
			sp[i][j] = min(sp[i][j-1], sp[i+(1<<(j-1))][j-1]);
		}
	}
}

int min_query(int u, int v) {
	int x = v-u+1;
	return min(sp[u][lg(x)], sp[v-(1 << (lg(x)))+1][lg(x)]);
}


int find(int x) {return lab[x] < 0 ? x : lab[x] = find(lab[x]);}

void merge(int x, int y) {
	if ((x = find(x)) == (y=find(y))) return;
	if (lab[y] < lab[x]) {
		int t = x;
		x = y;
		y = t;
	}
	lab[x] += lab[y];
	lab[y] = x;
}

int d[10], a[100005], sum, n;
int d0;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	vector<char> mp = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
	
	string np;
	np = "1000";
	string ans = "";
	while (np.size() % 4 > 0) {
		np = '0' + np;
	}
	for (int i = 0; i < np.size(); i+=4) {
		string s = "";
		for (int j = i; j<=i+4-1; j++) s+=np[j];
		bitset<4> a(s);
		char t = mp[a.to_ulong()];
	}
	//cout << endl;
	
	BigNum a(99999);
	BigNum b("999999999999");
	BigNum c = a+b;
	//cout << c.a << endl;
	
	freopen("HOMEEX.inp", "r", stdin);
	freopen("HOMEEX.out", "w", stdout);
	
	cin >> n;
	while(n < 1 || n > 100000) {
		cout << "Vui long nhap lai (1<= n <= 10^5): " << flush;
		cin >> n;
	}
	d0 = 0;
	memset(d,0,sizeof(d));
	sum = 0;
	for (int i = 1; i<=n; ++i) {
		cin >> a[i];
		while(a[i] < 0 || a[i] > 9) {
			cout << "Vui long nhap lai (0 <= a[i] <= 9): " << flush;
			cin >> a[i];
		}
		d0 += a[i] == 0;
		sum += a[i];
		d[a[i]%3]++;
	}
	if (d0 <= 0) {
		cout <<-1 << '\n';
		return 0;
	}
	sort(a+1,a+1+n,greater<int>());
	
	if (sum % 3 == 0) {
		for (int i = 1; i<=n; i++) {
			cout << a[i];			
		}cout << '\n';return 0;
	}
	if (sum % 3 == 1) {
		if (d[1] > 0) {
			d[1]--;
		}
		else if (d[1] <= 0) {
			d[2]-=2;
		}
		for (int i = 1; i<=n; i++) {
			if (d[a[i]%3]) {
				cout << a[i];
				d[a[i]%3]-=1;
			}
		}
		return 0;
	}
	if (sum % 3 == 2) {
		if (d[2] > 0) {
			d[2]--;
		}
		else if (d[2] <= 0) {
			d[1]-=1;
		}
		for (int i = 1; i<=n; i++) {
			if (d[a[i]%3]) {
				cout << a[i];
				d[a[i]%3]-=1;
			}
		}
		return 0;
	}
	
	return 0;
}
