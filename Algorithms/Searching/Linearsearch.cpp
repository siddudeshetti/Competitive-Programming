#include <bits/stdc++.h>
using namespace std;

void linearsearch(int n,int arr[],int f){
    //bubblesort algorithm
    int cnt=0;
    for (int i=0;i<n;i++){
        if(arr[i]==f){
            cout<<f<<" found at index "<<i;
            cnt++;
            break;
        }
    }
    if(cnt==0) cout<<f<<" is not found!";
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int f;
    cin>>f;
    linearsearch(n,arr,f);
}
