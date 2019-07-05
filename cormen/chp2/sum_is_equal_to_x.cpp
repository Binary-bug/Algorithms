#include<iostream>
#include<algorithm>


using namespace std;



int main(){
	int n,x,i,j;
	cin >> n >> x;
	int a[123];
	for(int i =0; i < n ; i++) scanf("%d",&a[i]);
	sort(a,a+n);
	
	// logic for sum equal to x starts from here.
	for(i =0,j=n-1; i <= j ;){
		if(a[i] + a[j] == x){
			cout << a[i] << " " << a[j] << endl;
			cout << "YES" << endl;
			return 0;
		}
		(a[i] + a[j] > x) ? j-- : i++;
	}
	cout << "NO" << endl;
	return 0;
}	
