#include <bits/stdc++.h>
#define ll long long 
#define ul unsigned long long 
#define ld long double 
#define fl(i,start,end) for(ll i=start;i<end;i++)
#define M 1000000007
#define endl '\n' 
using namespace std; 

void solve() {
    int n, t; cin >> n >> t;
    string s; cin >> s;
    while(t--) {
        for(int i = 0; i < n - 1; i++) {
            if(s[i] == 'B' && s[i+1] == 'G') {
                swap(s[i], s[i+1]);
                i++;
            }
        }
    }
    cout << s;
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    // int _t; cin >> _t; while(_t--) 
        solve();
    return 0;
}