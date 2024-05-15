// problem link
// https://www.codechef.com/problems/ROCPAPSCI

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    string str;
	    cin >> str;
	    int count = 0, c = 1;

	    for(int i = 0;i < n-1;i++){
	        if(str[i] == str[i+1]){
	            count++;
	            i += 1;
	        }
	    }



	    cout << n-count << endl;
	}

}
