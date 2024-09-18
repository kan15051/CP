#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        if(((a+b)%3)){
            cout << "NO\n";
        }
        else{
            int ma = max(a,b), mi = min(a,b);
            if(((ma+mi)/3+(ma-mi))/2>=0&&((ma+mi)/3-(ma-mi))/2>=0){
                cout << "YES\n";
            }
            else{
                cout << "NO\n";
            }
        }
    }
    return 0;
}