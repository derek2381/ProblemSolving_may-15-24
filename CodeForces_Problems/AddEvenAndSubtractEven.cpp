// problem link
// https://codeforces.com/problemset/problem/1311/A

#include <bits/stdc++.h>

using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;

        if((a > b && (a+b)%2 == 0) || (a < b && (a+b)%2 == 1)) {
            cout << 1 << endl;
        }else if((a > b && (a+b)%2 == 1) || (a < b && (a+b)%2 == 0)){
            cout << 2 << endl;
        }else{
            cout << 0 << endl;
        }
    }
}
