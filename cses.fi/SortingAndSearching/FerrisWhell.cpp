#include<bits/stdc++.h>

using namespace std;

int a[200010];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x;
    cin >> n >> x;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a,a+n);
    int l=0,r=n-1;
    int ans=0;
    while(l<=r){
        int sum=a[r];
        if(l<r&&sum+a[l]<=x){
            sum+=a[l];
            l++;
        }
        r--;
        ans++;
    }
    cout << ans;
    return 0;
}
/*
5 9 6 5 8 9 10 6 5 6

5 5 5 6 6 6 8 9 9 10
10 5 5
9 5 6
9 6
8 6
*/