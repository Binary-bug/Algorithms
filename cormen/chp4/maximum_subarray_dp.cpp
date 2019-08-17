#include<iostream>
#include<algorithm>



using namespace std;



int main(){
	int n;
	cin >> n;
	int a[12345];
	for(int i=0; i < n ; i++) scanf("%d",&a[i]);
	
	int max_sum = - 100000;
	int sum = 0;
		
	for(int i=0; i < n; i++){
		sum += a[i];
		
		if(sum > max_sum) max_sum = sum;
		if(sum < 0 ) sum = 0;
	}
	cout << max_sum << endl;
	return 0;
} 
