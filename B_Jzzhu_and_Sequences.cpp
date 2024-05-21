#include <bits/stdc++.h>
#define ll long long 
#define ul unsigned long long 
#define ld long double 
#define fl(i,start,end) for(ll i=start;i<end;i++)
#define M 1000000007
#define endl '\n' 
using namespace std; 

void solve() {
    ll x,y, n; cin >> x >> y >> n;
    int a[6] = {x,y, y-x, -1*x, -1*y, -1*y + x};
    n--;
    cout << (a[n%6] + 2LL*M)%M;
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    // int _t; cin >> _t; while(_t--) 
        solve();
    return 0;
}