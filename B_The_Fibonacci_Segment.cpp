#include <bits/stdc++.h>
#define ll long long 
#define ul unsigned long long 
#define ld long double 
#define fl(i,start,end) for(ll i=start;i<end;i++)
#define M 1000000007
#define endl '\n' 
using namespace std; 

void solve() {
    int n; cin >> n;
    ll a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    ll ans = min(2, n);

    ll temp = 0;
    for(int i = 0; i < n; i++) {
        if(i < 2) temp++;
        else if(a[i] == a[i-1] + a[i-2]) temp++;
        else {
            ans = max(ans, temp);
            temp = 2;
        }
    }
    ans = max(temp, ans);
    cout << ans << endl;
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    // int _t; cin >> _t; while(_t--) 
        solve();
    return 0;
}