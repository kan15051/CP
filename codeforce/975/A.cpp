#include<bits/stdc++.h>

using namespace std;

vector<int> a(110);
vector<pair<int,int>> dp(120);
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int ma=0;
        int po=0;
        for(int i=1; i<=n; i++){
            cin >> a[i];
        }
        for(int i=1; i<=n ;i++){
            pair<int,int> tans={a[i],1};
            for(int j=0; j<i-1; j++){
                if(max(dp[j].first,a[i])+dp[j].second+1>a[i]+1){
                    tans={max(dp[j].first,a[i]),dp[j].second+1};
                }
            }
            dp[i]=tans;
        }
        int ans=0;
        for(int i=1; i<=n; i++){
            ans=max(ans,dp[i].first+dp[i].second);
        }
        cout << ans << "\n";
    }
    return 0;
}