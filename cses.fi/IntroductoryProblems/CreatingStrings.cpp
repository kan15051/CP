#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    sort(s.begin(),s.end());
    int t=1;
    while(next_permutation(s.begin(),s.end())){
        t++;
    }
    sort(s.begin(),s.end());
    cout << t << "\n";
    cout << s << "\n";
    while(next_permutation(s.begin(),s.end())){
        cout << s << "\n";
    }
    return 0;
}