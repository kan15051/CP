#include<bits/stdc++.h>
 
using namespace std;
 
string s;
bool b[7][7];
int ans=0;
 
bool emp(int i,int j){
    return i>=0&&i<7&&j>=0&&j<7&&!b[i][j];
}
 
void solve(int i,int j,int t){
    if(i==6&&j==0){
        if(t==48){
            ans++;
        }
        return;
    }
    b[i][j]=true;
    if((s[t]=='?'||s[t]=='U')&&i>0&&b[i-1][j]==0&&!(!(emp(i-2,j))&&(emp(i-1,j-1)&&emp(i-1,j+1)))){
        solve(i-1,j,t+1);
    }
    if((s[t]=='?'||s[t]=='D')&&i<6&&b[i+1][j]==0&&!(!(emp(i+2,j))&&(emp(i+1,j-1)&&emp(i+1,j+1)))){
        solve(i+1,j,t+1);
    }
    if((s[t]=='?'||s[t]=='L')&&j>0&&b[i][j-1]==0&&!(!(emp(i,j-2))&&(emp(i-1,j-1)&&emp(i+1,j-1)))){
        solve(i,j-1,t+1);
    }
    if((s[t]=='?'||s[t]=='R')&&j<6&&b[i][j+1]==0&&!(!(emp(i,j+2))&&(emp(i-1,j+1)&&emp(i+1,j+1)))){
        solve(i,j+1,t+1);
    }
    b[i][j]=false;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> s;
    solve(0,0,0);
    cout << ans;
    return 0;
}

/*
??????R??????U??????????????????????????LD????D?
*/