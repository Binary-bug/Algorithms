#include<iostream>
#include<algorithm>

using namespace std;




int max_cross_array(int *a, int i, int mid, int j){
	int max_leftsum = -1000000;
	int max_rightsum = -1000000;

	int leftsum = 0;
	int rightsum = 0;
	for(int x=mid; x >= i ; x--){
		leftsum += a[x];
		if(leftsum > max_leftsum) max_leftsum = leftsum;
	}

	for(int x=mid+1; x <=j; x++){
		rightsum += a[x];
		if(rightsum > max_rightsum) max_rightsum = rightsum;
	}
	return max_leftsum + max_rightsum;
}



int max_sub_array(int *a, int i, int j){
	if( i == j ) return a[i];
	else{
		int mid = (i+j)/2;
		int max_left_sum = max_sub_array(a,i,mid);
		int max_right_sum = max_sub_array(a,mid+1,j);
		int max_cross_sum = max_cross_array(a,i,mid,j);
		return max({max_left_sum,max_right_sum,max_cross_sum});
	}
}	





int main(){
	int n;
	cin >> n;
	int a[12345];
	for(int i = 0;i < n ; i++) scanf("%d",&a[i]);
	
	int sum = max_sub_array(a,0,n-1);
	
	cout << sum << endl;
	return 0;
}
	
