#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c;
    cin >> a >> b >> c;
    int sc = a+b+c;
    if(sc>=80){
        cout << "A";
    }
    else if(sc>=75){
        cout << "B+";
    }
    else if(sc>=70){
        cout << "B";
    }
    else if(sc>=65){
        cout << "C+";
    }
    else if(sc>=60){
        cout << "C";
    }
    else if(sc>=55){
        cout << "D+";
    }
    else if(sc>=50){
        cout << "D";
    }
    else{
        cout << "F";
    }
    return 0;
}