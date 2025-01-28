#include <bits/stdc++.h>
using namespace std;
vector<int> x;
bool visited[10000];
int a[100];
int ans;

vector<pair<int,int> > ketqua;

void Try(int j, int n, int d) {
    if (j >= n) {
        vector<pair<int,int> > p;
        for (int i = 0; i<n; i++) {
            p.push_back(make_pair(x[i], a[i]));
        }
        sort(p.begin(), p.end());
        int solan = 1;
        int sum = 0;
        for (int i = 0; i<n; i++) {
            if (sum+p[i].second <= d) {
                sum+=p[i].second;
            }
            else if (sum+p[i].second > d) {
                solan += 1;
                sum = p[i].second;
            }
        }
        if (solan < ans) {
            ketqua = p;
            ans = solan;
        }
        return;
    }

    for (int i = 1; i<=n; i++) {
        if (!visited[i]) {
            visited[i] = true;
            x.push_back(i);
            Try(j+1,n,d);
            x.pop_back();
            visited[i] = false;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,d; cin >> n >> d;
    for (int i = 0; i<n; ++i) {
        cin >> a[i];
    }

    ans = INT_MAX;
    Try(0,n,d);
    cout << ans << endl;
    int sum = 0;
    for (int i = 0; i<n; ++i) {
        if (sum + ketqua[i].second > d) {
            sum = ketqua[i].second;
            cout << '\n';
        } else if (sum + ketqua[i].second <= d) {
            sum += ketqua[i].second;
        }
        cout << ketqua[i].second << ' ';
    }

    return 0;
}
