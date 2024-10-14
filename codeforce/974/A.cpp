#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,k,a;
        cin >> n >> k;
        int gold=0;
        int ans=0;
        for(int i=0; i<n; i++){
            cin >> a;
            if(a>=k){
                gold+=a;
            }
            else if(a==0){
                if(gold){
                    ans++;
                    gold--;
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}