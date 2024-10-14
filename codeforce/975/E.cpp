#include<bits/stdc++.h>

using namespace std;

vector<int> v[500010],deep[500010];
bool visited[500010];
vector<int> lev(500010);

int dfs(int n,int i){
    if(visited[n]){
        return 0;
    }
    visited[n]=true;
    deep[i].push_back(n);
    if(v[n].size()==1){
        return lev[n]=1;
    }
    int temp = 0;
    for(auto x:v[n]){
        temp+=dfs(x,i+1);
    }
    return lev[n]=temp+1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        int a,b;
        cin >> n;
        for(int i=0; i<n-1; i++){
            cin >> a >> b;
            v[a].push_back(b);
            v[b].push_back(a);
        }
        dfs(1,1);
        // cout << "lev: ";
        // for(int i=1; i<=n; i++){
        //     cout << lev[i] << " ";
        // }
        // cout << "\n";
        // for(int i=1; i<=n; i++){
        //     cout << i << ":";
        //     for(auto x:deep[i]){
        //         cout << x << " ";
        //     }
        //     cout << "\n";
        // }
        int ans = n;
        int j=1;
        while(deep[j].size()>0){
            int tans = 0;
            for(auto x:deep[j]){
                tans += lev[x];
            }
        }
    }
    return 0;
}
        // int j=1;
        // while(lev[j]>0){
        //     cout << j << ": " << lev[j] << "\n";
        //     j++; 
        // }