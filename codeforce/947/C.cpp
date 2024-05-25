#include<bits/stdc++.h>

using namespace std;

vector<int> v;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,a;
        int ans=0,mi= 1e9+10;
        cin >> n;
        v.push_back(0);
        for(int i=1; i<=n; i++){
            cin >> a;
            v.push_back(a);
        }
        v.push_back(0);
        if(n==2){
            ans = min(v[1],v[2]);
        }
        for(int i=1; i<=n-2; i++){
            int temp[3] = {v[i],v[i+1],v[i+2]};
            sort(temp,temp+3);
            if(temp[1]>ans){
                ans=temp[1];
            }
        }
        cout << ans << "\n";
        v.clear();
    }
    return 0;
}