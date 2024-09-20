#include<bits/stdc++.h>
 
using namespace std;
 
int a[200010],b[200010];
 
multiset<int> ml;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> a[i];
        ml.insert(a[i]);
    }
    for(int i=0; i<m; i++){
        cin >> b[i];
        auto it=ml.lower_bound(b[i]);
        if(*it==b[i]){
            cout << *it << "\n";
            ml.erase(it);
        }
        else if(it!=ml.begin()){
            it--;
            if(*it<=b[i]){
                cout << *it << "\n";
                ml.erase(it);
            }
        }
        else{
            cout << "-1\n";
        }
    }
    //sort(a,a+n);
    
 
    return 0;
}