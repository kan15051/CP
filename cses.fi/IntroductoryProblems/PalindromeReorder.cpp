#include<bits/stdc++.h>

using namespace std;
    
int a[26];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;

    cin >> s;
    for(auto x:s){
        a[x-'A']++;
    }
    int temp=0,tempI=-1;
    string ans="";
    for(int i=0; i<26; i++){
        if(a[i]%2){
            temp++;
            tempI=i;
        }
        string tempS(a[i]/2,'A'+i);
        ans+= tempS;
    }
    if(temp>1){
        cout << "NO SOLUTION";
    }
    else{
        cout << ans;
        if(tempI!=-1){
            cout << char('A'+tempI);
        }
        reverse(ans.begin(),ans.end());
        cout << ans;
    }
    return 0;
}