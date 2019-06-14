#include<iostream>



using namespace std;



int main(){
	int n,i,j;
	int a[10008];
	cin >> n;
	for(i=0; i < n; i++) scanf("%d",&a[i]);
	
	/// From here on insertion algo is written, array a contains integers to be sorted, This logic works in non-decreasing fashion
	/// Insertion sort works the way we pick cards from the deck and insert into hand.
	int key;
	for(i=1; i < n; i++){
		key = a[i];
		j = i-1;
		while(j >=0 && a[j] > key){
			a[j+1]=a[j];
			j--;
		}
		a[j+1] = key;
	}
	for(i=0; i <n; i++) printf("%d ",a[i]);
	cout << endl;
	return 0;
}
