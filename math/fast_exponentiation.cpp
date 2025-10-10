#include <bits/stdc++.h>
using namespace std;

int exp(int k, int n)
{
    //base case
    if (n == 0) return 1;

    //multiply while backtracking
    int subprob = pow(k, n / 2);
    if (n & 1){
        return k * subprob * subprob;
    }
    
    return subprob * subprob;
}

int main()
{
    int n, k;
    cin >> n >> k;

    cout << exp(n, k);

    return 0;
}
