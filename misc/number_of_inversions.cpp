// This piece of code uses logic given in textbook solution manual with small change, gets rid of unnecessary boolean variable counted

#include<iostream>

using namespace std;


int merge(int *a,int p,int q,int r){
	int n1 = q - p + 1;
	int n2 = r - q;
	int *L = (int *)malloc(n1*sizeof(int));
	int *R = (int *)malloc(n2*sizeof(int));
	for(int i =0; i < n1 ; i++) L[i] = a[p + i];
	for(int i =0; i < n2; i++) R[i] = a[q + i +1];
	
	int i,j,k;
	int inv = 0;
	for(i=0,j=0,k=p; i < n1 && j < n2;){
		if(L[i] <= R[j]) a[k++] = L[i++];
		else a[k++] = R[j++],inv = inv + n1 - i;
	}
	while(i != n1) a[k++] = L[i++];
	while(j != n2) a[k++] = R[j++];
	free(L);
	free(R);
	return inv;
}

int mergesort(int *a,int p,int r){
	int q = (p + r)/2;
	if(p < r){
		int left = mergesort(a,p,q);
		int right = mergesort(a,q+1,r);
		return merge(a,p,q,r) + left + right;
	}
	return 0;
}

int main(){
	int n;
	cin >> n;
	int a[12345];
	for(int i=0; i++ < n ; ) cin >> a[i];
	
	int inv = mergesort(a,1,n);
	cout << "Number of inversions are " << inv << endl << "Elements of array in sorted order " << endl;
	for(int i =0; i++ <n ; ) cout << a[i] << " ";
	cout << endl;
	return 0;
}
