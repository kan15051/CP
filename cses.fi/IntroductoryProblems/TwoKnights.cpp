#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    long long ans=0;
    for(int i=2; i<=n+1; i++){
        cout << ans << "\n";
        long long k= i*i-(i-1)*(i-1);
        ans+=(k*(i-1)*(i-1)-(4*k-12))+k*(k-1)/2;
    }
    return 0;
}