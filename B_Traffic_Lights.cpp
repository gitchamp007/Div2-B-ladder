#include <bits/stdc++.h>
#define ll long long 
#define ul unsigned long long 
#define ld long double 
#define fl(i,start,end) for(ll i=start;i<end;i++)
#define M 1000000007
#define endl '\n' 
using namespace std; 

void solve() {
    double l, d, v, g, r; cin >> l >> d >> v >> g >> r;
    double gt = d/v;
    while(gt > g + r) gt -= g + r;
    if(gt < g) cout << fixed << setprecision(8) << l/v;
    else cout << fixed << setprecision(8) << d/v - gt + g + r + (l - d)/v;
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    // int _t; cin >> _t; while(_t--) 
        solve();
    return 0;
}