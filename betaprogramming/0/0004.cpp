#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    int m=0,n=0;
    cin >> s;
    for(int i=0; i<s.size(); i++){
        if(s[i]==toupper(s[i])){
            m++;
        }
        else if(s[i]==tolower(s[i])){
            n++;
        }
    }
    if(m>0&&n>0){
        cout << "Mix";
    }
    else if(m>0){
        cout << "All Capital Letter";
    }
    else{
        cout << "All Small Letter";
    }
    return 0;
}