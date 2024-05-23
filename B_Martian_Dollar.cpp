#include <bits/stdc++.h>
#define ll long long 
#define ul unsigned long long 
#define ld long double 
#define fl(i,start,end) for(ll i=start;i<end;i++)
#define M 1000000007
#define endl '\n' 
using namespace std; 

void solve() {
    int n, b; cin >> n >>b;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    int lo = 0, hi = 1, maxi = 0, ans = b;
    while(hi < n) {
        ans = max(ans, (b/a[lo])*(a[hi] - a[lo]) + b);
        if(a[hi] > a[lo]) hi++;
        else {
            lo++;
            hi = lo + 1;
        }
    }
    cout << ans << endl;
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    // int _t; cin >> _t; while(_t--) 
        solve();
    return 0;
}