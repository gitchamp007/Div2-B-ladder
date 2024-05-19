#include <bits/stdc++.h>
#define ll long long 
#define ul unsigned long long 
#define ld long double 
#define fl(i,start,end) for(ll i=start;i<end;i++)
#define M 1000000007
#define endl '\n' 
using namespace std; 

void solve() {
    ll n,m; cin >> n >> m;
    ll temp = n - m + 1, a = n %m , b = n/m;

    cout << (m-a)*b*(b-1)/2 + a*b*(b+1)/2 << " " <<temp *(temp - 1) /2;
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    // int _t; cin >> _t; while(_t--) 
        solve();
    return 0;
}