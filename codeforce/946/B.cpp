#include<bits/stdc++.h>

using namespace std;

vector<char> v;
map<char,char> m;
set<char> se;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;
        for(int i=0; i<n; i++){
            if(se.count(s[i])==0){
                v.push_back(s[i]);
                se.insert(s[i]);
            }
        }
        sort(v.begin(),v.end());
        for(int i=0; i<v.size(); i++){
            m[v[i]]=v[v.size()-1-i];
        }
        for(int i=0; i<n; i++){
            s[i]= m[s[i]];
        }
        cout << s << "\n";
        m.clear();
        v.clear();
        se.clear();
    }
    return 0;
}