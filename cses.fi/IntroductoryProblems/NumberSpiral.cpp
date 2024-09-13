#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        long long a,b;
        cin >> a >> b;
        if(a>b){
            if(a%2){
                cout << (a-1)*(a-1)+b << "\n";
            }
            else{
                cout << a*a-b+1 << "\n";
            }
        }
        else if(a<b){
            if(b%2){
                cout << b*b-a+1 << "\n";
            }
            else{
                cout << (b-1)*(b-1)+a << "\n";
            }
        }
        else{
            cout << a*a-a+1 << "\n";
        }
    }
    return 0;
}