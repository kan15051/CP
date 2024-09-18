#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<string> v={""};
    for(int i=0; i<n; i++){
        int t = v.size();
        for(int i=0; i<t; i++){
            v[i]="0"+v[i];
        }
        for(int i=t-1; i>=0; i--){
            v.push_back(v[i]);
            v[t-1+(t-i)][0]='1';
        }
    }
    for(auto x:v){
        cout << x << "\n";
    }
    return 0;
}