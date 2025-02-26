#include <bits/stdc++.h>
using namespace std;

//count number of digits
int count_digit(int n){
    int cnt=0;
    while(n>0){
        n/=10;
        cnt++;
    }
    cout<<cnt;
    return 0;
}

//reverse a number
int reverse_digit(int n){
    int rev=0;
    while(n>0){
        int last_digit=n%10;
        rev=(rev*10)+last_digit;
        n/=10;
        
    }
    cout<<rev;
    return 0;
}

//palindrome
int palindrome(int n){
    int rev=0;
    int dup=n;
    while(n>0){
        int last_digit=n%10;
        rev=rev*10+last_digit;
        n/=10;
    }
    if(rev==dup){
        cout<<"true";
    }else{
        cout<<"no";
    }
    return 0;

}

//armstrong
int armstrong(int n){
    int no_of_digits=log10(n)+1;
    int dup=n;
    int sum=0;
    while(n>0){
        int last_digit=n%10;
        int m=1;
        for(int i=0;i<no_of_digits;i++){
            m*=last_digit;
        }
        sum+=m;
        n/=10;
    }
    if(sum==dup){
        cout<<"true";
    }else{
        cout<<"no";
    }
    return 0;
}

//printalldivisors
int printalldivisors(int n){
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            cout<<i<<" ";
            if(n/i!=i){
                cout<<n/i<<" ";
            }
        }
    }
    return 0;
}

int main() {
    int n=36;
    printalldivisors(n);
    return 0;
}
