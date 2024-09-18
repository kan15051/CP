#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        long long k;
        cin >> k;
        long long l=1,r=10,n=1;
        while(k>(r-l)*n){
            k-=(r-l)*n;
            l*=10;
            r*=10;
            n++;
        }
        long long temp = l;
        l+=k/n;
        k%=n;
        if(k==0){
            cout << (l-1)%10 << "\n";
        }
        else{
            for(int i=0; i<k-1; i++){
                temp/=10;
            }
            cout << (l/temp)%10 << "\n";
        }
    }
    return 0;
}