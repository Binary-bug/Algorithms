#include<bits/stdc++.h>

using namespace std;

long long n, k;

int main(){
    int tc;
    cin >> tc;
    for(int i = 0; i < tc; ++i){
    	cin >> n >> k;
    	long long res = 0;
    	while(n > 0){
    	    if(n % k == 0){
    	        n /= k;
    	        ++res;
    	    }
    	    else{
    	        long long rem = n % k;
    	        res += rem;
    	        n -= rem;
    	    }
    	}
    	
    	cout << res << endl;
    }
	return 0;
}
