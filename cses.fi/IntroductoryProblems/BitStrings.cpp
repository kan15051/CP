#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin >> n;
    long long ans = 1;
    long long temp = 2;
    while(n>=1){
        if(n%2){
            ans*=temp;
            ans%=1000000007;
        }
        temp*=temp;
        temp%=1000000007;
        n/=2;
    }
    cout << ans;
    return 0;
}