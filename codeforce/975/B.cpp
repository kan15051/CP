#include<bits/stdc++.h>

using namespace std;

vector<long long> v(200010);
map<long long,long long> mp;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        long long n,q,tq;
        cin >> n >> q;
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        for(long long i=0; i<n; i++){
            if(i>0){
                mp[i*(n-i)]+=v[i]-v[i-1]-1;
            }
            mp[(i+1)*(n-i)-1]++;
        }
        for(int i=0; i<q; i++){
            cin >> tq;
            cout << mp[tq] << " ";
        }
        cout << "\n";
        mp.clear();
    }
    return 0;
}