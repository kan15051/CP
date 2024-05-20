#include<bits/stdc++.h>

using namespace std;

vector<int> v,v1;
map<pair<int,int>,map<int,int> > m1,m2,m3;

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
            m1[make_pair(v[i],v[i+1])][v[i+2]]++;
            m2[make_pair(v[i+1],v[i+2])][v[i]]++; ;
            m3[make_pair(v[i+2],v[i])][v[i+1]]++ ;
        }
        for(auto x:m1){
            for(auto y:x.second){
                v1.push_back(y.second);
            }
            for(int i=0; i<v1.size(); i++){
                for(int j=i+1; j<v1.size(); j++){
                    ans+=v1[i]*v1[j];
                }
            }
            v1.clear();
        }
        
        for(auto x:m2){
            for(auto y:x.second){
                v1.push_back(y.second);
            }
            for(int i=0; i<v1.size(); i++){
                for(int j=i+1; j<v1.size(); j++){
                    ans+=v1[i]*v1[j];
                }
            }
            v1.clear();
        }
        
        for(auto x:m3){
            for(auto y:x.second){
                v1.push_back(y.second);
            }
            for(int i=0; i<v1.size(); i++){
                for(int j=i+1; j<v1.size(); j++){
                    ans+=v1[i]*v1[j];
                }
            }
            v1.clear();
        }
        cout << ans << "\n";
        v.clear();
        m1.clear();
        m2.clear();
        m3.clear();
    }
    return 0;
}