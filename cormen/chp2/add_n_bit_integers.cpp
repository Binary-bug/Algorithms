#include<iostream>


using namespace std;



int main(){
	bool a[12345];
	bool b[12345];

	int n;
	cin >> n;
	bool c[12345];
	for(int i=0; i < n ;i ++) cin >> a[i];
	for(int i=0; i < n; i++) cin >> b[i];
	bool carry = 0;
	for(int i = n-1; i >= 0 ; i--) {
		c[i+1] = (a[i] ^ b[i]) ^  carry;
		carry = (a[i] == b[i]) ? a[i] : carry ;
	}
	c[0] = carry;
	for(int i =0; i < n+1; i++) cout << c[i];
	return 0;
}
	
