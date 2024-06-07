#include <bits/stdc++.h>
#define ll long long 
#define ul unsigned long long 
#define ld long double 
#define fl(i,start,end) for(ll i=start;i<end;i++)
#define M 1000000007
#define endl '\n' 
using namespace std; 

void solve() {
    ll n, k; cin >> n >> k;

    k *= 2;
    for(ll i = 1; i <= 2*n; i++) {
        if(k) {
            if(i & 1) cout << i + 1 << " ";
            else cout << i - 1 << " " ;
            k--;
        } else cout << i << " ";
    }
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    // int _t; cin >> _t; while(_t--) 
        solve();
    return 0;
}