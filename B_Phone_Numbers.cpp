#include <bits/stdc++.h>
#define ll long long 
#define ul unsigned long long 
#define ld long double 
#define M 1e9 + 7
#define endl '\n' 
using namespace std; 

void solve() {
    int n; cin >> n;
    vector < pair<int , string> > pc, tc, gc;
    while(n--) {
        int t; string name ; cin >> t >> name;
        int tpc = 0, ttc = 0, tgc = 0;

        while(t--) {
            string num; cin >> num;

            bool ispiz = true, istax = true;
            char prev = num[0];
            for(int i = 1; i < num.size(); i++){
                if(num[i] != '-') {
                    if(num[i] != num[0]) istax = false;
                    if(prev <= num[i]) ispiz = false;
                    prev = num[i];
                }
            }
            if(ispiz) tpc++;
            else if(istax) ttc++;
            else tgc++;
        }
        pc.push_back(make_pair(tpc , name));
        tc.push_back(make_pair(ttc, name));
        gc.push_back(make_pair(tgc, name));
    }
    cout << "If you want to call a taxi, you should call: ";
    int temp = INT_MIN, count = 0;
    for(auto i : tc){
        if(i.first > temp) {
            temp = i.first;
            count = 1;
        }
        else if(i.first == temp) count++;
    }
    for(auto i : tc) {
        if(i.first == temp) {
            cout << i.second;
            if(count > 1) cout << ", ";
            else if(count == 1) cout << ".\n";
            count--;
        }
    }
    cout << "If you want to order a pizza, you should call: ";
    temp = INT_MIN, count = 0;
    for(auto i : pc){
        if(i.first > temp) {
            temp = i.first;
            count = 1;
        }
        else if(i.first == temp) count++;
    }
    for(auto i : pc) {
        if(i.first == temp) {
            cout << i.second;
            if(count > 1) cout << ", ";
            else if(count == 1) cout << ".\n";
            count--;
        }
    }
        
    cout << "If you want to go to a cafe with a wonderful girl, you should call: ";
    temp = INT_MIN, count = 0;
    for(auto i : gc){
        if(i.first > temp) {
            temp = i.first;
            count = 1;
        }
        else if(i.first == temp) count++;
    }
    for(auto i : gc) {
        if(i.first == temp) {
            cout << i.second;
            if(count > 1) cout << ", ";
            else if(count == 1) cout << ".\n";
            count--;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    // int _t; cin >> _t; while(_t--) 
        solve();
    return 0;
}