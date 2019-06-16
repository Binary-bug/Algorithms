// C(n,k) = C(n-1,k-1) + C(n-1,k)
// C(n,0) = C(n,n) = 1;


// this is a naive recursive implementation which quickly blows up


#include<iostream>

using namespace std;


int binomialCoeff(int n,int k){
	if( k == 0 || k == n) return 1;
	return binomialCoeff(n-1,k-1) + binomialCoeff(n-1,k);
}


int main(){
	int n = 5 , k = 2;
	cout << "value of C("<< n<<", "<<k<<") is " << binomialCoeff(n,k);
	return 0;
}
