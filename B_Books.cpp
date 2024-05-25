#include <bits/stdc++.h>
#define ll long long 
#define ul unsigned long long 
#define ld long double 
#define fl(i,start,end) for(ll i=start;i<end;i++)
#define M 1000000007
#define endl '\n' 
using namespace std; 

void solve() {
    ll n,k; cin >> n >> k;
    ll a[n], pre[n + 1];
    pre[0] = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(i) pre[(i+1)] = pre[i] + a[i];
        else pre[(i + 1)] = a[i];
    }
    ll ans = 0;
    for(int i = 0; i <= n; i++) {
        ll temp = upper_bound(pre, pre + n + 1, k + pre[i]) - &pre[i] - 1;
        ans = max(ans, temp);
    }
    cout << ans << endl;
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    // int _t; cin >> _t; while(_t--) 
        solve();
    return 0;
}