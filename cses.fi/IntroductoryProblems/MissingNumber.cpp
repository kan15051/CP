#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n,sum = 0,t;
    cin >> n;
    for(int i=0; i<n-1; i++){
        cin >> t;
        sum += t;
    }
    cout << n*(n+1)/2-sum;
    return 0;
}