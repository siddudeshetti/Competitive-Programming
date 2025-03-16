#include <iostream>
using namespace std;

void counting_divisors(int x){
    int cnt=0;
    for(int i=1;i*i<=x;i++){
        if(x%i==0){
            cnt++;
            if(x/i!=i){
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        counting_divisors(x);
    }
    
}
