#include<iostream>
#include<algorithm>



using namespace std;


int main(){
	int n;
	cin >> n;
	int a[12345];
	for(int i=0; i < n; i++) scanf("%d",&a[i]);
	
	int curr_max = a[0];
	int max_sum = a[0];

	for(int i=1; i < n; i++){
		
		curr_max =  max(a[i], curr_max + a[i]);
		max_sum = max(curr_max, max_sum);
	}
	cout << max_sum << endl;
	return 0;
}
