#include<bits/stdc++.h>

using namespace std;

int t=0;

void hanoi(int n,int st, int en, int emp,bool pri){
    if(n==1){
        if(pri){
            cout << st << " " << en << "\n";
        }
        t++;
        return ;
    }
    hanoi(n-1,st,emp,en,pri);
    if(pri){
        cout << st << " " << en << "\n";
    }
    t++;
    hanoi(n-1,emp,en,st,pri);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    hanoi(n,1,3,2,false);
    cout << t << "\n";
    hanoi(n,1,3,2,true);
    return 0;
}