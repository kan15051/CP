#include<bits/stdc++.h>

using namespace std;

long long n,a[30], ans=20000000010;

void solve(long long sum,int i,long long ts){
    if(i>n){
        ans = min(ans,abs(sum-2*(ts)));
        return;
    }
    solve(sum,i+1,ts+a[i]);
    solve(sum,i+1,ts);
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    long long sum=0;
    for(int i=0; i<n; i++){
        cin >> a[i];
        sum+=a[i];
    }
    solve(sum,0,0);
    cout << ans;
    return 0;
}