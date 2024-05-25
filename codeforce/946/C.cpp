#include<bits/stdc++.h>

using namespace std;

vector<int> v;
map<pair<int,int>,int> m1,m2,m3;
map<pair<pair<int,int>,int>,int> m;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long ans =0;
        int n,a;
        cin >> n;
        for(int i=0; i<n; i++){
            cin >> a;
            v.push_back(a);
        }
        for(int i=0; i<n-2; i++){
            int temp=m[make_pair(make_pair(v[i],v[i+1]),v[i+2])];
            ans += m1[make_pair(v[i],v[i+1])]-temp;
            ans += m2[make_pair(v[i+1],v[i+2])]-temp;
            ans += m3[make_pair(v[i+2],v[i])]-temp;

            m[make_pair(make_pair(v[i],v[i+1]),v[i+2])]++;
            m1[make_pair(v[i],v[i+1])]++;
            m2[make_pair(v[i+1],v[i+2])]++;
            m3[make_pair(v[i+2],v[i])]++;
        }
        
        cout << ans << "\n";
        v.clear();
        m.clear();
        m1.clear();
        m2.clear();
        m3.clear();
    }
    return 0;
}