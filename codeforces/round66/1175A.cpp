#include<iostream>


using namespace std;

int main(){
	int T;
	unsigned long long int n,k,x,temp;
	cin >> T;
	while(T--){
		cin >> n >> k;
		x = 0;
		while(n >= k){
			temp = n % k;
			if(temp){
				x+= temp;
				n-= temp;
			}
			else{
				x++;
				n /= k;
			}	
		}
		cout << x + n << endl;
	}
	return 0;
}
