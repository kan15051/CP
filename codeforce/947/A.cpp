#include<bits/stdc++.h>

using namespace std;

vector<int> v;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,a;
        int ans=0;
        cin >> n;
        for(int i=0; i<n; i++){
            cin >> a;
            v.push_back(a);
            if(i>0){
                if(v[i-1]>v[i]){
                    ans++;
                }
            }
        }
        if(ans>1){
            cout << "NO\n";
        }
        else if(ans==1&&v[n-1]>v[0]){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
        }
        v.clear();
    }
    return 0;
}