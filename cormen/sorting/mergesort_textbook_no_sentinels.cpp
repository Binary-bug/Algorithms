#include<iostream>

using namespace std;


void merge(int *a,int p,int q,int r){
	int i,j,k;
	int n1 = q-p+1;
	int n2 = r - q;
	int *L = (int *) malloc(n1*sizeof(int));
	int *R = (int *) malloc(n2*sizeof(int));
	for(int i = 0; i < n1 ; i++) L[i] = a[p+i];
	for(int i = 0; i < n2; i++) R[i] = a[q+i+1];
	i=j=0;
	for(k=p; i != n1 && j != n2; k++){
		if(L[i] <= R[j]) a[k]=L[i],i++;
		else a[k] = R[j],j++;
	}
	while(i != n1) a[k++] = L[i++];
	while(j != n2) a[k++] = R[j++];
	free(L);
	free(R);
}






void merge_sort(int *a,int p ,int r){
	if(p < r){
		int q = (p+r)/2;
		merge_sort(a,p,q);
		merge_sort(a,q+1,r);
		merge(a,p,q,r);
	}
}









int main(){
	int n;
	cin >> n;
	int a[12345];
	for(int i=0; i < n ; i++) scanf("%d",&a[i]);
	
	merge_sort(a,0,n-1);
	
	for(int i =0; i < n; i++) printf("%d ",a[i]);
	return 0;
}
