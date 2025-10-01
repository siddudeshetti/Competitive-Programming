#include <bits/stdc++.h>
using namespace std;

vector<int> add(vector<int> v1,vector<int> v2) {
    //reverse both vectors
    reverse(v1.begin(),v1.end());
    reverse(v2.begin(),v2.end());

    //elementary maths
    vector<int> ans;
    int length=min(v1.size(),v2.size());
    int carry=0;

    for(int i=0;i<length;i++){
        int value=v1[i]+v2[i]+carry;
        ans.push_back(value%10);
        carry=value/10;
    }

    //leftout digits pushing
    if(v1.size() > length){
        for(int i = length;i<v1.size(); i++){
            int value = v1[i] + carry;
            ans.push_back(value%10);
            carry=value/10;
        }
    }
    if(v2.size() > length){
        for(int i = length;i<v2.size(); i++){
            int value = v2[i] + carry;
            ans.push_back(value%10);
            carry=value/10;
        }

    }

    //pushing leftout carry
    while(carry){
        ans.push_back(carry%10);
        carry/=10;
    }

    reverse(ans.begin(),ans.end());
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    //take input as strings and push every letter to vector 
    string a,b;
    cin>>a>>b;
  
    vector<int> v1;
    vector<int> v2;
    for(int i=0;i<a.size();i++){
        v1.push_back(a[i]-'0');
    }
    for(int i=0;i<b.size();i++){
        v2.push_back(b[i]-'0');
    }

    vector<int> res=add(v1,v2);
    for(auto i:res){
        cout<<i;
    }
    return 0;
}
