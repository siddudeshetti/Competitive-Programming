#include <bits/stdc++.h>
using namespace std;

void bubblesort(int n,int arr[]){
    //bubblesort algorithm
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if (arr[i]>arr[j]){
                swap(arr[i], arr[j]);
            }
        }
    }
    //printing array
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }
    bubblesort(n,arr);
}
