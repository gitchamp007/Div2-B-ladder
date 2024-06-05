#include <bits/stdc++.h>
#define ll long long 
#define ul unsigned long long 
#define ld long double 
#define fl(i,start,end) for(ll i=start;i<end;i++)
#define M 1000000007
#define endl '\n' 
using namespace std; 

void solve() {
    ll n; cin >> n;
    ll a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    ll ans = 0, maxi = a[0];
    for(int i = 1; i < n; i++) {
        if(maxi - a[i] > maxi - a[i - 1]) ans += a[i - 1] - a[i];
        maxi = max(maxi, a[i]);
    }
    cout << ans;
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    // int _t; cin >> _t; while(_t--) 
        solve();
    return 0;
}