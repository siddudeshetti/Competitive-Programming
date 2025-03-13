#include <bits/stdc++.h>
using namespace std;


//gcd
void gcd(int a,int b){
	int temp=0;
	int min_element=min(a,b);
	for(int i=1;i<min_element;i++){
		if(a%i==0 && b%i==0){    //assigning commom divisors
			temp=i;
		}
	}
	cout<<temp;
}

//lcm
void lcm(int a,int b){
	int max_element=max(a,b);
	while(1){
		if(max_element%a==0 && max_element%b==0){
			cout<<max_element;
			break;
		}
		max_element++;
	}
}


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

//print all divisors
int printalldivisors(int n){
    vector<int> v;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            v.push_back(i);
            if(n/i!=i){
                v.push_back(n/i);
            }
        }
    }
    sort(v.begin(),v.end());
    for(auto it:v) cout<<it<<" ";
    return 0;
}

//prime number check
int primeornot(int n){
    int cnt=0;
    for(int i=1;i*i<=n;i++){//i<=sqrt(n) is same as i*i<=n
        if(n%i==0){
            cnt++;
            if(n/i!=i){
                cnt++;
            }
        }
    }
    if(cnt==2) cout<<"prime number";
    else cout<<"Not a prime number";

    return 0;
}

int main() {
    int a,b;
    cin>>a>>b;
    lcm(a,b);
    return 0;
}
