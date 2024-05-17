#include <bits/stdc++.h>
#define ll long long 
#define ul unsigned long long 
#define ld long double 
#define fl(i,s,n) for(ll i=s;i<n;i++)
#define M 1000000007
#define endl '\n' 
using namespace std; 


void solve() {
    int n,m; cin >> n >> m;
    char p; cin >> p;

    char a[n][m];
    fl(i, 0, n) fl(j, 0, m) cin >> a[i][j];

    set <char> st;
    fl(i,0,n) fl(j, 0, m) {
        if(a[i][j] == p) {
            fl(x, -1, 2) fl(y, -1, 2) {
                if(y == 0 || x == 0) {
                    if(i - x >= 0 && i-x < n && j - y >= 0 && j-y < m){
                        if(a[(i-x)][(j-y)] != p && a[(i-x)][(j-y)] != '.') st.insert(a[(i-x)][(j-y)]);
                    }
                }
            }
        }
    }
    cout << st.size() ;
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    // int _t; cin >> _t; while(_t--) 
        solve();
    return 0;
}