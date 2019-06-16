#include<iostream>
#include<algorithm>

using namespace std;


int binary_search(int *a,int v,int low,int high){
	if(low > high) return -1;
	int mid = ( low + high)/2;
	if(a[mid] == v) return mid+1;
	else if(v > a[mid]) return binary_search(a,v,mid+1,high);
	else return binary_search(a,v,low,mid-1);
}


int main(){
	int n,x;
	cin >> n  >> x;
	int a[12345];
	for(int i =0; i < n ; i++) scanf("%d",&a[i]);
	
	sort(a,a+n);
	
	int mid = binary_search(a,x,0,n-1);
	cout << mid << endl;
	return 0;
} 
		
