#include <bits/stdc++.h>
#define ll long long 
#define ul unsigned long long 
#define ld long double 
#define fl(i,start,end) for(ll i=start;i<end;i++)
#define M 1000000007
#define endl '\n' 
using namespace std; 

void solve() {
    ll n, l; cin >> n >> l;
    ll a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);
    double ans = max(a[0] , l - a[n - 1]);
    for(int i = 0; i < n - 1; i++) {
        ans = max(ans, (a[i+1] - a[i])/ 2.0);
    }
    cout << fixed << setprecision(10) << ans;
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    // int _t; cin >> _t; while(_t--) 
        solve();
    return 0;
}