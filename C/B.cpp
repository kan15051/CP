#include<bits/stdc++.h>

using namespace std;

double a[200010];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        long long sum=0;
        cin >> n;
        for(int i=0; i<n; i++){
            cin >> a[i];
            sum+=a[i];
        }
        sort(a,a+n);
        if(n<3){
            cout << "-1\n";
        }
        else{
            if(sum>2*n*a[n/2]){
                cout << "0\n";
            }
            else{
                cout << (long long)(2*n*a[n/2]+1-sum) << "\n";
            }
        }
    }
    return 0;
}