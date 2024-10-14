#include<bits/stdc++.h>

using namespace std;

set<int> v[500010];
bool visited[500010];

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
            v[a].insert(b);
            v[b].insert(a);
        }
        int ans=5000010;
        queue<pair<int,pair<int,int>>> q;
        q.push({1,{1,0}});
        int t_size=0;
        int cu_lev = 1;
        set<pair<int,int>> nex_de;
        while(!q.empty()){
            int tof = q.front().first;
            pair<int,int> tos = q.front().second;
            q.pop();
            //cout << "tof: " << tof << "\n";
            if(tos.first>cu_lev){
                ans = min(ans,n-t_size);
                //cout << "t_size: " << t_size << "\n";
                for(auto &x:nex_de){
                    v[x.second].erase(x.first);
                    //cout << "delete: " << x.first << "\n";
                    t_size--;
                    if(x.second!=1&&v[x.second].size()==1){
                        nex_de.insert({x.second,*v[x.second].begin()});
                    }
                }
                nex_de.clear();
                cu_lev++;
            }
            t_size++;
            //cout << "t_size_after_add: " << t_size << "\n";
            visited[tof]=true;
            if(tof!=1&&v[tof].size()==1){
                nex_de.insert({tof,tos.second});
            }
            for(auto &x:v[tof]){
                if(!visited[x]){
                    q.push({x,{cu_lev+1,tof}});
                }
            }
        }
        //cout << "t_size_end: " << t_size << "\n";
        ans = min(ans,n-t_size);
        for(auto &x:visited){
            x = false;
        }
        for(auto &x:v){
            x.clear();
        }
        cout <<  ans << "\n";
    }   
    return 0;
}