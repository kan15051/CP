#include<bits/stdc++.h>

using namespace std;

int a[200010];

int gcd(int m,int n){
    while(m%n){
        m%=n;
        swap(m,n);
    }
    return n;
}

int gcd_arr(vector<int> &b, int si){
    if(si==0){
        return 0;
    }
    else if(si==1){
        return b[0];
    }
    int temp;
    for(int i=1; i<si; i++){
        if(i==1){
            temp = gcd(b[i-1],b[i]);
        }
        else{
            temp = gcd(temp,b[i]);
        }
    }
    return temp;
}

int solve(int b[],int n){
    int ans=1;
    vector<int> v;
    int temp = n;
    for(int i=1; i<temp; i++){
        if(temp%i==0){
            v.push_back(i);
        }
    }
    for(auto x:v){
        int gc = -1;
        vector<int> c;
        for(int i=x; i<n; i+=x){
            if(i==x){
                for(int j=0; j<x; j++){
                    if(b[i+j]-b[i+j-x]){
                        c.push_back(b[i+j]-b[i+j-x]);
                    }
                }
                if(gcd_arr(c,c.size())){
                    gc=gcd_arr(c,c.size());
                }
            }
            else{
                for(int j=0; j<x; j++){
                    if(b[i+j]-b[i+j-x]){
                        c.push_back(b[i+j]-b[i+j-x]);
                    }
                }
                if(gcd_arr(c,c.size())){
                    gc=(abs(gc)==1)?gcd_arr(c,c.size()):gcd(gc,gcd_arr(c,c.size()));
                }
            }
            c.clear();
        }
        if(gc!=1){
            cout << "x: " << x << " gc :" << gc <<"\n";
            ans++;
        }
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        int ans = solve(a,n);
        cout << "ans: " << ans << "\n";
    }
    return 0;
}
/*
1
4
1 2 1 4
*/