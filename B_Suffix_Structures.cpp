#include <bits/stdc++.h>
#define ll long long 
#define ul unsigned long long 
#define ld long double 
#define fl(i,start,end) for(ll i=start;i<end;i++)
#define M 1000000007
#define endl '\n' 
using namespace std; 

void solve() {
    string s, t; cin >> s >> t;
    if(s.size() == t.size()) {
        map <char, int> mp;
        for(int i = 0; i < s.size(); i++) mp[t[i]]++;

        for(int i = 0; i < s.size(); i++) {
            if(mp.count(s[i])) mp[s[i]]--;
            if(mp[s[i]] == 0) mp.erase(s[i]);
        }

        if(mp.size()) cout << "need tree";
        else cout << "array";
    } else if(s.size() > t.size()) {
        int ss = 0, ts = 0;
        while(ss < s.size() && ts < t.size()) {
            if(s[ss] == t[ts]) {
                ss++;
                ts++;
            } else ss++;
        }
        if(ts == t.size()) cout << "automaton";
        else {
            map <char, int> mp;
            for(int i = 0; i < t.size(); i++) mp[t[i]]++;

            for(int i = 0; i < s.size(); i++) {
                if(mp.count(s[i])) mp[s[i]]--;
                if(mp[s[i]] == 0) mp.erase(s[i]);
            }
            if(mp.size()) cout << "need tree";
            else cout << "both";
        }

    } else cout << "need tree";
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    // int _t; cin >> _t; while(_t--) 
        solve();
    return 0;
}