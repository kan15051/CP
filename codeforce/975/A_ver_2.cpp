#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int ma=0;
        int po=0;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
            if(a[i]>ma){
                ma=a[i];
                if(i%2==0&&n%2==1){
                    po=1;
                }
                else{
                    po=0;
                }
            }
            else if(a[i]==ma){
                if(i%2==0&&n%2==1){
                    po=1;
                }
            }
        }
        cout << ma+n/2+po << "\n";
    }
    return 0;
}
