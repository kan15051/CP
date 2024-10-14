#include<bits/stdc++.h>

using namespace std;

vector<pair<int,int>> v;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a,b;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a >> b;
        v.push_back({b,a});
    }
    sort(v.begin(),v.end());
    int en = 0;
    int ans=0;
    for(auto x:v){
        if(x.second>=en){
            ans++;
            en=x.first;
        }
    }
    cout << ans;
    return 0;
}