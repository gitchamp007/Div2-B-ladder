#include <bits/stdc++.h>
#define ll long long 
#define ul unsigned long long 
#define ld long double 
#define M 1000000007
#define endl '\n' 
using namespace std; 

void solve() {
    string s; cin >> s;

    int ev_pos = -1;
    for(int i = 0; i < s.size(); i++) {
        int dig = int(s[i] - '0');
        if((dig & 1) == 0) {
            ev_pos = i;
            if(s[i] < s[s.size() - 1]) break;
        }
    }
    if(ev_pos == -1) cout << -1;
    else {
        swap(s[ev_pos], s[(s.size() - 1)]);
        for(int i = 0; i < s.size(); i++) cout << s[i];
    }
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    // int _t; cin >> _t; while(_t--) 
        solve();
    return 0;
}