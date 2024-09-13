#include<bits/stdc++.h>

using namespace std;

vector<int> v[200010];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,a,b,x,y;
        cin >> n >> a >> b;
        for(int i=0; i<n-1; i++){
            cin >> x >> y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        for(int i=0; i<n; i++){
            v[i].clear();
        }
    }
    return 0;
}