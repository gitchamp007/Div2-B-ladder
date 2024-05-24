#include <bits/stdc++.h>
#define ll long long 
#define ul unsigned long long 
#define ld long double 
#define fl(i,start,end) for(ll i=start;i<end;i++)
#define M 1000000007
#define endl '\n' 
using namespace std; 

void solve() {
    ll r, x1,y1, x2 , y2; cin >> r >> x1 >> y1 >> x2 >> y2;
    ll x = x1 - x2, y = y1 - y2;
    cout << (int)(ceil(sqrt(x*x + y*y)) + 2*r - 1) / (2* r);
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    // int _t; cin >> _t; while(_t--) 
        solve();
    return 0;
}