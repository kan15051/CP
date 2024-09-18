#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    if((n*(n+1)/2)%2){
        cout << "NO";
    }
    else{
        cout << "YES\n";
        if(n%4){
            cout << (n-3)/2+2 << "\n";
            int k = n-3;
            cout << "1 2 ";
            for(int i=1; i<=k/4; i++){
                cout << i+3 << " ";
            }
            for(int i=3*k/4+1; i<=k; i++){
                cout << i+3  << " ";
            }
            cout << "\n" << (n-3)/2+1 << "\n";
            cout << "3 ";
            for(int i=k/4+1; i<=3*k/4; i++){
                cout << i+3 << " ";
            }
        }
        else{
            cout << n/2 << "\n";
            for(int i=1; i<=n/4; i++){
                cout << i << " ";
            }
            for(int i=3*n/4+1; i<=n; i++){
                cout << i  << " ";
            }
            cout << "\n" << n/2 << "\n";
            for(int i=n/4+1; i<=3*n/4; i++){
                cout << i << " ";
            }
        }

    }
    return 0;
}