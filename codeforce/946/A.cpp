#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int x,y,ans =0;
        cin >> x >> y;
        while(y>=2){
            y-=2;
            x-=7;
            ans++;
        }
        if(y==1){
            y--;
            x-=11;
            ans++;
        }
        if(x>0){
            ans+=ceil((double)x/15);
        }
        cout << ans << "\n";
    }
    return 0;
}