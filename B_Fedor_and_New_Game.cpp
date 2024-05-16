#include <bits/stdc++.h>
#define ll long long 
#define ul unsigned long long 
#define ld long double 
#define M 1000000007
#define endl '\n' 
using namespace std; 

void solve() {
    int n,m,k; cin >> n >> m >> k;
    ul a[m+1];
    for(int i = 0; i <= m; i++) cin >> a[i];

    int ans = 0, count = 0;
    for(int i = 0; i < m; i++) {
        count = 0;
        for(int j = 0; j <= n; j++) {
            if(((a[i] >> j & 1) == 1) && ((a[m] >> j & 1) == 0)) count++;
            if (((a[i] >> j & 1) == 0) && ((a[m] >> j & 1) == 1)) count++;
        }
        if(count <= k) ans++;
    }
    cout << ans;
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    // int _t; cin >> _t; while(_t--) 
        solve();
    return 0;
}