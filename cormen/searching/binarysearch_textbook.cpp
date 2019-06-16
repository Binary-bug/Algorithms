#include<iostream>
#include<algorithm>

using namespace std;



int main(){
	int n,low,high,mid,x;
	cin >> n >> x;
	int a[1234];

	for(int i=0; i < n ; i++) scanf("%d",&a[i]);
   	sort(a,a+n);	
	for(low=0,high= n-1; low <= high ; ){
		mid = (low + high)/2;
		if(a[mid] == x){
			cout << mid + 1 << endl;
			return 0;
		}
		else if(a[mid] > x) high = mid - 1;
		else low = mid + 1;
	}
	cout << "NOT found" << endl;
	return 0;
}
