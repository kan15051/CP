#include<bits/stdc++.h>

using namespace std;

pair<long long,int> v[200010];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    long long x,a;
    cin >> n >> x;
    for(int i=0; i<n; i++){
        cin >> a;
        v[i]={a,i+1};
    }
    sort(v,v+n);
    int l=0,r=n-1;
    while(l<r){
        if(v[l].first+v[r].first==x){
            break;
        }

        if(v[l].first+v[r].first>x){
            r--;
        }
        else{
            l++;
        }
    }
    if(r>l){
        cout << v[l].second << " " << v[r].second;
    }
    else{
        cout << "IMPOSSIBLE";
    }
    return 0;
}