#include<bits/stdc++.h>

using namespace std;

long long a[200010];
map<long long,int> mp;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a,a+n);
    long long j=1;
    for(int i=0; i<n; i++){
        vector<long long> v;
        for(auto x:mp){
            v.push_back(a[i]+x.first);
        }
        for(auto x:v){
            mp[x]=1;
        }
        mp[a[i]]=1;
        while(mp.find(j)!=mp.end()){
            j++;
        }
        if(a[i]>j){
            break;
        }
    }
    // for(auto x:mp){
    //     cout << x.first << " " << x.second << "\n";
    // }
    cout << j;
    return 0;
}