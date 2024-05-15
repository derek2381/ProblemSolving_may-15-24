// problem link
// https://www.codechef.com/problems/MONEYDOUBLE

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    long long int x ,y;
	    cin >>x >> y;

	    for(int i = 0;i < y;i++){
	        if(2*x > (x+1000)){
	            x = 2*x;
	        }else{
	            x += 1000;
	        }
	    }

	    cout << x << endl;
	}

}
