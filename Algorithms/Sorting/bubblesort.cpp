#include <bits/stdc++.h>
using namespace std;

void bubble_sort(vector<int> &v){
    for(int i=0;i<v.size()-1;i++){
        for(int j=0;j<v.size()-i-1;j++){ //optimized with not iterating end of sorted array
            if(v[j]>v[j+1]) swap(v[j],v[j+1]);
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int i;
        vector<int> v;
        while(cin>>i){
            v.push_back(i);
            if(cin.peek()=='\n') break;
        }

        bubble_sort(v);

        for(auto x:v){
            cout<<x<<" ";
        }

        cout<<'\n';
    }
}
