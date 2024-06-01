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
    double a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);
    double PI = 3.1415926536, ans = 0;
    for(int i = n - 1; i >= 0; i-=2) {
        if(i > 0) ans += PI * (a[i] * a[i] - a[i-1] * a[i-1]);
        else ans += PI * (a[i] * a[i]);
    }
    cout << fixed << setprecision(10) << ans << endl;
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    // int _t; cin >> _t; while(_t--) 
        solve();
    return 0;
}