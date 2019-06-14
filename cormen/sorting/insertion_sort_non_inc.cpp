/* This is complementary code to insertion_sort_non_dec, i.e. sorts a given array in non increasing order*/

#include<iostream>

using namespace std;




int main(){
	int n,i,j,key;
	int a[12345];
	cin >> n;
	for(i = 0; i < n; i++) scanf("%d",&a[i]);
	
	// Insertion sort for non increasing order logic starts from here

	for(i=1; i < n; i++){
		for(key = a[i],j=i-1; j >=0 && a[j] < key; j--){
			a[j+1]=a[j];
		}
		a[j+1] = key;
	}
	for(i = 0; i < n; i++) printf("%d ",a[i]);
	cout << endl;
	return 0;
}
		
