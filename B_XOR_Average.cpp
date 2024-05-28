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
    if(n&1) while(n--) cout << "69 ";
    else {
        cout << "1 3 ";
        n -= 2;
        while(n--) cout << "2 ";
    }
    cout << endl;
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int _t; cin >> _t; while(_t--) 
        solve();
    return 0;
}