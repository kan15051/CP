#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,t,ma=-2e9-10,mi=2e9+10;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> t;
        mi = min(mi,t);
        ma = max(ma,t);
    }
    cout << mi << "\n" << ma;
    return 0;
}