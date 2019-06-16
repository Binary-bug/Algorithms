#include<iostream>


using namespace std;


int main(){
	int n,i,j,smallest;
	cin >> n;
	int A[12345];
	for(i = 0; i < n ; i++) scanf("%d",&A[i]);

// from here on selection sort algorithm starts
	for(i=0; i < n-1; i++){
		smallest = i;
		for(j=i+1; j < n; j++){
			if(A[j] < A[smallest]){
				smallest = j;
			}
		}
	/// This does swapping of elements smallest and current i
	A[i] = A[smallest] + A[i];
	A[smallest] = A[i] - A[smallest];
	A[i] -= A[smallest];
	}
	
	for(i=0; i < n; i++) printf("%d ",A[i]);
	cout << endl;
	return 0;
}
