#include <bits/stdc++.h>
#define ll long long 
#define ul unsigned long long 
#define ld long double 
#define fl(i,start,end) for(ll i=start;i<end;i++)
#define M 1000000007
#define endl '\n' 
using namespace std; 

void solve() {
    ll n, d; cin >> n >> d;
    vector< pair<ll, ll>> frens;
    for(int i = 0; i < n; i++) {
        ll a,b; cin >> a  >> b;
        frens.emplace_back(make_pair(a,b));
    }
    sort(frens.begin(), frens.end());
    vector <ll> pre(n + 1, 0), mon(n);

    for(int i = 0; i < n; i++) {
        mon[i] = frens[i].first;
        pre[i + 1] = frens[i].second + pre[i];
    }
    ll ans = LONG_LONG_MIN;
    for(int i = 0; i < n; i++) {
        ll pos = lower_bound(mon.begin(), mon.end(), mon[i] + d) - mon.begin();
        // cout << i << " " << pos << endl;
        ans = max(ans, pre[pos] - pre[i]);
    }
    cout << ans << endl;
    

}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    // int _t; cin >> _t; while(_t--) 
        solve();
    return 0;
}