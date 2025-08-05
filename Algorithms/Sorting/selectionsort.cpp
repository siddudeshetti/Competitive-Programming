#include <bits/stdc++.h>
using namespace std;

void selection_sort(vector<int> &v){
    for(int i=0;i<v.size()-1;i++){
        int x=i; //pointer 1
        for(int j=i;j<v.size()-1;j++){
            if(v[j]<v[x]) x=j; //selecting minimum
        }
        swap(v[x],v[i]); //swap minimum with i
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

        selection_sort(v);

        for(auto x:v){
            cout<<x<<" ";
        }

        cout<<'\n';
    }
}
