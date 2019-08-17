#include<iostream>


using namespace std;



int modified_merge(int *a,int p,int q, int r){
	int n1 = q - p +1;
	int n2 = r - q;
	int *L = (int *)malloc(n1*sizeof(int));
	int *R = (int *)malloc(n2*sizeof(int));
	for(int i = 0; i < n1;i++)L[i] = a[p + i];
	for(int i = 0; i < n2; i++) R[i] = a[q + i + 1];
	int inv = 0;
	int i = 0;
	int j = 0;
	int k = p;
	bool counted = false;
	for(; i < n1 && j < n2;k++){
		if(L[i] <= R[j]){
			a[k] = L[i];
			i++;
			counted = false;
		}
		else{
			a[k] = R[j];
			if(counted == false){
				 inv = inv + j +1;
				counted = true;
			}
			j++;
		}
	}
	while(i != n1){
		 a[k++] = L[i++];
		if(counted == false){
				 inv += n2;
				 counted = true;
		}
		counted = false;
	}
		
	while(j != n2) a[k++] = R[j++];
	free(L);
	free(R);
	return inv;
}

int modified_mergesort(int *a,int p, int r){
	int inv = 0;
	if( p < r){
		int q = (p + r)/2;
		int left = modified_mergesort(a,p,q);
		int right = modified_mergesort(a,q+1,r);
		inv = modified_merge(a,p,q,r) + left + right;
	}
	return inv;
}



int main(){
	int i,n;
	cin >> n;
	int a[1234];
	for(i = 0; i++ < n; ) cin >> a[i];

	int inv = modified_mergesort(a,1,n);
	cout << "Number of inversions are " << inv << endl;
	cout << "Elements of given array in sorted order" << endl;
	for(i = 0; i++ < n; ) cout << a[i] << " ";
	return 0;
}
