#include <iostream>
using namespace std;

void weird_algorithm(long long n){
    if(n==1){
        cout<<n;
    }
    while(n>1){
        if(n%2==0){
            cout<<n<<" ";
            n/=2;
        }else{
            cout<<n<<" ";
            n=n*3+1;
        }
        if(n==1){
            cout<<1;
            break;
        }
    }
}

int main() {
    long long n;
    cin>>n;
    weird_algorithm(n);
}