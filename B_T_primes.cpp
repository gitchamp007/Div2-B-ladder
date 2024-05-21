#include <bits/stdc++.h>
#define ll long long 
#define ul unsigned long long 
#define ld long double 
#define fl(i,start,end) for(ll i=start;i<end;i++)
#define M 1000000007
#define endl '\n' 
using namespace std; 

vector <ll> sq;

void sqq() {
    vector <bool> isp(1000002, true);
    for(int i = 2; i*i < 1000002; i++) {
        if(isp[i]) {
            for(int j = i*i; j <= 1000001; j+= i) isp[j] = false;
        }
    }

    for(int i = 2; i < 1000002; i++) if(isp[i]) sq.push_back(1LL*i*i);
}

void solve() {
    ll x; cin >> x;
    auto it = lower_bound(sq.begin(), sq.end(), x);
    if(it != sq.end() && *it == x) cout << "YES\n";
    else cout << "NO\n";
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    sqq();
    int _t; cin >> _t; while(_t--) 
        solve();
    return 0;
}