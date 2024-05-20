#include<bits/stdc++.h>

using namespace std;

bool check(int a[],int n){
    for(int i=0; i<n; i++){
        if(a[i]>0){
            return true;
        }
    }
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,a[4]={0,0,0,0},k[2]={0,0};
        int h[4] = {0,0,0,0},r[4]={0,0,0,0};
        string s;
        cin >> n >> s;;
        for(int i=0; i<n; i++){
            if(s[i]=='N'){
                a[0]++;
            }
            else if(s[i]=='S'){
                a[1]++;
            }
            else if(s[i]=='E'){
                a[2]++;
            }
            else if(s[i]=='W'){
                a[3]++;
            }
        }
        int temp = min(a[0],a[1]);
        k[0]+=temp;
        a[0]-=temp;
        a[1]-=temp;
        temp = min(a[2],a[3]);
        k[1]+=temp;
        a[2]-=temp;
        a[3]-=temp;
        if((a[0]%2==1||a[1]%2==1||a[2]%2==1||a[3]%2==1)||(k[0]+k[1]<2&&a[0]<2&&a[1]<2&&a[2]<2&&a[3]<2)){
            cout << "NO\n";
            continue;
        }
        if(!check(h,4)){
            if(k[0]>0){
                h[0]++;
                h[1]++;
            }
        }
        if(!check(h,4)){
            if(k[1]>0){
                h[2]++;
                h[3]++;
            }
        }
        if(a[0]>0){
            h[0]+=a[0]/2;
        }
        else if(a[1]>0){
            h[1]+=a[1]/2;
        }

        if(a[2]>0){
            h[2]+=a[2]/2;
        }
        else if(a[3]>0){
            h[3]+=a[3]/2;
        }
        
        for(int i=0; i<n; i++){
            if(s[i]=='N'&&h[0]>0){
                s[i]='H';
                h[0]--;
                continue;
            }
            else if(s[i]=='S'&&h[1]>0){
                s[i]='H';
                h[1]--;
                continue;
            }
            else if(s[i]=='E'&&h[2]>0){
                s[i]='H';
                h[2]--;
                continue;
            }
            else if(s[i]=='W'&&h[3]>0){
                s[i]='H';
                h[3]--;
                continue;
            }
            s[i]= 'R';
        }
        cout << s << "\n";
    }
    return 0;
}