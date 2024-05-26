#include <bits/stdc++.h>
#define ll long long 
#define ul unsigned long long 
#define ld long double 
#define fl(i,start,end) for(ll i=start;i<end;i++)
#define M 1000000007
#define endl '\n' 
using namespace std; 

void solve() {
    int n, x; cin >> n >> x;
    int lo = -1, hi = INT_MAX;
    for(int i = 0; i < n; i++) {
        int a,b; cin >> a >> b;
        if(a > b) swap(a,b);
        if(a > hi || b < lo) {
            cout << -1;
            return;
        }
        lo = max(lo, a);
        hi = min(hi, b);
    }
    if(x >= lo && x <= hi) cout << 0;
    else cout << min(abs(lo - x) , abs(hi - x));
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    // int _t; cin >> _t; while(_t--) 
        solve();
    return 0;
}