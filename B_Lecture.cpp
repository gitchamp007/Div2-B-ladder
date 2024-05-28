#include <bits/stdc++.h>
#define ll long long 
#define ul unsigned long long 
#define ld long double 
#define fl(i,start,end) for(ll i=start;i<end;i++)
#define M 1000000007
#define endl '\n' 
using namespace std; 

void solve() {
    int n,m; cin >> n >> m;
    map <string , string> mps;
    while(m--) {
        string s,t; cin >> s >> t;
        if(s.size() > t.size()) mps[s] = t;
    }
    while(n--){
        string s;
        cin >> s;
        if(mps.count(s)) cout << mps[s] << " ";
        else cout << s << " ";
    }
    cout << endl;
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    // int _t; cin >> _t; while(_t--) 
        solve();
    return 0;
}