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
    int m = (n+1)/2;
    cout << m <<endl;

    int st = 1, ed = 3*n;
    while(m--) {
        cout << st << " " << ed << endl;
        st += 3;
        ed -= 3;
    }
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int _t; cin >> _t; while(_t--) 
        solve();
    return 0;
}