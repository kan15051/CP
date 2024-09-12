#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    int ans=1, t=1;
    for(int i=1; i<s.size(); i++){
        if(s[i]==s[i-1]){
            t++;
        }
        else{
            ans = max(t,ans);
            t=1;
        }
        if(i==s.size()-1){
            ans = max(t,ans);
        }
    }
    cout << ans;
    return 0;
}