#include<bits/stdc++.h>

using namespace std;

string cb[8];
int t1[8],t2[8],t3[15],t4[15];
long long ans=0;

void piece(int i, int j, bool add){
    if(add){
        t1[i]=1;
        t2[j]=1;
        t3[i+j]=1;
        t4[7-i+j]=1;
    }
    else{
        t1[i]=0;
        t2[j]=0;
        t3[i+j]=0;
        t4[7-i+j]=0;
    }
}

void solve(int n,int i){
    // if(i>2){
    //     return;
    // }
    if(n==0){
        ans++;
        return;
    }
    for(int j=0; j<8; j++){
        if(cb[i][j]=='.'){
            if(t1[i]==0&&t2[j]==0&&t3[i+j]==0&&t4[7-i+j]==0){
                //cout << "n: " << n << " i: " << i << " j: " << j << "\n";
                piece(i,j,true);
                //cout << "t1: " << t1[i] << " t2: " << t2[j] << " t3: " << t3[i+j] << " t4: " << t4[7-i+j] << "\n";
                solve(n-1,i+1);
                piece(i,j,false);
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(int i=0; i<8; i++){
        cin >> cb[i];
    }
    solve(8,0);
    cout << ans;
    return 0;
}