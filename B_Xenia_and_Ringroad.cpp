#include <bits/stdc++.h>
#define ll long long 
#define ul unsigned long long 
#define ld long double 
#define fl(i,start,end) for(ll i=start;i<end;i++)
#define M 1000000007
#define endl '\n' 
using namespace std; 

void solve() {
    int n, m; cin >>  n >> m;
    int a[m];
    for(int i = 0; i < m; i++) cin >> a[i];
    ll ans = a[0] - 1;
    for(int i = 1; i < m; i++){
        if(a[i] < a[i-1]) ans += ( n + a[i] - a[i-1]);
        else ans += a[i] - a[i-1];
    }
    cout << ans;
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    // int _t; cin >> _t; while(_t--) 
        solve();
    return 0;
}