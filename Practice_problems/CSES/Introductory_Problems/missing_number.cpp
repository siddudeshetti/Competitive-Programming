#include <bits/stdc++.h>
using namespace std;

void missingnumber(int n,set<int> s){
    int cnt=1;
    bool b=true;
    for(auto x:s){
        if(x==cnt){
            cnt++;
        }else{
            cout<<cnt;
            b=false;
            break;
        }
    }
    if(b) cout<<cnt;
}

int main() {
    int n;
    cin>>n;
    set<int> s;
    for (int i=1;i<=n;i++) {
        int x;cin>>x;
        s.insert(x);
    }
    missingnumber(n,s);
}