#include <bits/stdc++.h>
#define ll long long 
#define ul unsigned long long 
#define ld long double 
#define fl(i,start,end) for(ll i=start;i<end;i++)
#define M 1000000007
#define endl '\n' 
using namespace std; 

void solve() {
    string s; cin >> s;
    ll k; cin >> k;
    ll a[26], ma = -1;
    for(int i = 0; i < 26; i++){
        cin >> a[i];
        ma = max(ma, a[i]);
    }
    ll ans = 0;
    for(int i = 0; i < s.size(); i++) ans += (i + 1) * a[(s[i] - 'a')];
    ll n = s.size();
    cout << ans + ma * ( (n + k + 1) * (n + k)/2 - n*(n +1)/2);
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    // int _t; cin >> _t; while(_t--) 
        solve();
    return 0;
}