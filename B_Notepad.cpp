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
    string s; cin >> s;
    unordered_map <string ,int> mp;
    for(int i = 0; i + 1 < n; i++) {
        if(mp.count(s.substr(i,2))) {
            if((mp[s.substr(i,2)] < i - 1)) {
                cout << "YES\n";
                return;
            }
            else continue;
        }
        mp[s.substr(i,2)] = i;
    }
    cout << "NO\n";
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int _t; cin >> _t; while(_t--) 
        solve();
    return 0;
}