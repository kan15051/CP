#include<bits/stdc++.h>

using namespace std;

long long a[200010];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    long long ans = -1e9-10, tans = -1e9-10;
    for(int i=0; i<n;i++){
        tans = max(tans+a[i],a[i]);
        ans = max(ans,tans);
    }
    cout << ans;
    return 0;
}