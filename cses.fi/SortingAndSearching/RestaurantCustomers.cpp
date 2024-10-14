#include<bits/stdc++.h>

using namespace std;

map<int,int> mp;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a,b;
    cin >> n;
    int ans=0;
    int mans=0;
    for(int i=0; i<n ;i++){
        cin >> a >> b;
        mp[a]++;
        mp[b]--;
    }
    for(auto x:mp){
        ans+=x.second;
        mans=max(mans,ans);
    }
    cout << mans;
    return 0;
}