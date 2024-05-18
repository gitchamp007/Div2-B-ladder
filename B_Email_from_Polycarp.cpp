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
    while(n--) {

        string s,t; cin >> s >> t;
        int ss = 0, ts = 0, flag = 1;
        while(ss < s.size() && ts < t.size()) {
            if(s[ss] == t[ts]) {
                ss++;
                ts++;
            } else if(ss == 0) {
                flag = 0;
                break;
            } else {
                if(t[ts] == t[ts -1]) ts++;
                else {
                    flag = 0;
                    break;
                }
            }
        }
        while(ts < t.size()) {
            if(t[ts] != t[ts - 1]) {
                flag = 0;
                break;
            }
            ts++;
        }
        if(ss == s.size() && flag) cout << "YES\n";
        else cout << "NO\n";
    }
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    // int _t; cin >> _t; while(_t--) 
        solve();
    return 0;
}