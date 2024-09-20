#include<bits/stdc++.h>

using namespace std;

const int M=200010;

int a[M];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a,a+n);
    int ans=1;
    for(int i=1; i<n ;i++){
        if(a[i]!=a[i-1]){
            ans++;
        }
    }
    cout << ans;
    return 0;
}