#include <bits/stdc++.h>
#define ll long long 
#define ul unsigned long long 
#define ld long double 
#define fl(i,start,end) for(ll i=start;i<end;i++)
#define M 1000000007
#define endl '\n' 
using namespace std; 

void solve() {
    string s,t; cin >> s >> t;
    map <char, int> mp, mp2;
    int ans = 0;
    for(int i = 0; i < s.size(); i++) mp[s[i]]++;
    for(int k = 0; k < t.size(); k++) mp2[t[k]]++;

    for(auto p : mp2) {
        if(mp.count(p.first)) {
            ans += min(p.second, mp[p.first]);
        } else {
            ans = -1;
            break;
        }
    }
    cout << ans;
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    // int _t; cin >> _t; while(_t--) 
        solve();
    return 0;
}