#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int m,n,t;
    int a[110][110];
    cin >> m >> n;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin >> a[i][j];
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin >> t;
            a[i][j]+=t;
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}