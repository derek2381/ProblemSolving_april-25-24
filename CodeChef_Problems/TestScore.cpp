// problem link
// https://www.codechef.com/problems/CHEFSCORE

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n, x, y;
	    cin >> n >> x >> y;

	    int val = x;
	    if(y == 0){
	        cout << "YES\n";
	    }else{
	        int flag = 0;
	        for(int i =1;i <=n;i++){
	            val = x*i;
	            if(val == y){
	                flag = 1;
	            }
	        }

	        if(flag){
	            cout << "YES\n";
	        }else{
	            cout << "NO\n";
	        }
	    }

	}

}
