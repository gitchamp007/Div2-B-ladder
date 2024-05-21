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
    if(s[0] == '@' || s[s.size() - 1] == '@' || s.size() < 3) cout << "No solution";
    else {
        vector <string> ans;

        int lo = 0, hi = 0, prev_pos = 0;
        while(hi < s.size()) {
            if(s[hi] != '@') hi++;
            else if(prev_pos) {
                if(hi - prev_pos - 1 <2) {
                    cout << "No solution";
                    return;
                }
                ans.push_back(s.substr(lo, prev_pos - lo + 2));
                lo = prev_pos +2;
                prev_pos = hi;
                hi++;
            } else {
                prev_pos = hi;
                hi++;
            }
        }
        if(prev_pos) ans.push_back(s.substr(lo, s.size() - lo));
        for(int i = 0; i < ans.size(); i++) {
            if(i != ans.size() - 1) cout  << ans[i] << ",";
            else cout << ans[i];
        }
        if(ans.size() == 0) cout << "No solution";
    }

}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    // int _t; cin >> _t; while(_t--) 
        solve();
    return 0;
}