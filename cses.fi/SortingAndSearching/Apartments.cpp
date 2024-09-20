#include<bits/stdc++.h>

using namespace std;

long long a[200010], b[200010];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    long long k;
    cin >> n >> m >> k;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<m; i++){
        cin >> b[i];
    }
    sort(a,a+n);
    sort(b,b+m);
    int l=0,r=0;
    int ans=0;
    while(l<n&&r<m){
        if(b[r]<=a[l]+k&&b[r]>=a[l]-k){
            ans++;
            l++;
            r++;
        }
        else if(b[r]>a[l]+k){
            l++;
        }
        else{
            r++;
        }
    }
    cout << ans;
    return 0;
}