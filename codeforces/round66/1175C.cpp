#include<iostream>
#include<algorithm>
#include<array>


using namespace std;


int main(){
	int T;
	int median;
	int n,k;
	int a[200008]={0};
	int d[200008]={0};
	cin >> T;
	while(T--){
		cin >> n >> k;
		for(int i=0; i++ < n;cin >> a[i]);
		(n % 2) ? median = a[(n+1)/2] : median = (a[n/2] + a[n/2+1])/2 ;
		for(int i=0; i++ < n; d[i] = abs(median - a[i]));
		sort(d+1,d+n+1);
		cout << (a[k+1] + d[k+1]) << endl;
	}
	return 0;
}
		
		
		
