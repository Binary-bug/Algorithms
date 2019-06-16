#include<iostream>
#include<algorithm>

using namespace std;


int main(){
	int n,x,i,j,mid;
	cin >> n >> x;
	int a[12345];
	for(int i =0 ; i<n ; i++) scanf("%d",&a[i]);
	
	sort(a,a+n);
	//binary search iterative
	for(i = 0,j=n-1,mid=(i+j)/2;i <= j && a[mid]!=x;){
		if(a[mid] > x) j = mid-1;
		else i = mid+1;
		mid = (i+j)/2;
	}
	cout << (a[mid] == x ? mid+1 : -1 ) << endl;
	return 0;
}
	
