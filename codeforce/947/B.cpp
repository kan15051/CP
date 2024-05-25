#include<bits/stdc++.h>

using namespace std;

int a[100010];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n, ans=1,j=1;
        cin >> n;
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        sort(a,a+n);
        while(j<n){
            if(a[j]%a[0]==0){
                j++;
            }
            else{
                break;
            }
        }
        if(j>n){
            cout << "YES\n";
            continue;
        }
        for(int i=2; i<n; i++){
            if(a[i]%a[0]==0||a[i]%a[j]==0){
                continue;
            }
            else{
                ans=0;
                break;
            }
        }
        if(ans==1){
            cout << "YES" << "\n";
        }
        else{
            cout << "NO" << "\n";
        }
    }
    return 0;
}