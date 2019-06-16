#include<iostream>



using namespace std;



int merge(int *a,int p,int q,int r){
	int n1;
	int n2;
	n1 = q - p + 1;
	n2 = r - q;
	int *L = (int *)malloc((n1+1)*sizeof(int));
	int *R = (int *)malloc((n2+1)*sizeof(int));
	L[n1] = INT8_MAX;
	R[n2] = INT8_MAX;
	for(int i = 0; i < n1; i++) L[i] = a[p+i];
	for(int i = 0; i < n2; i++) R[i] = a[q+1+i];
	int i = 0;
	int j = 0;
	for(int k = p; k <= r;k++){
		if(L[i] <= R[j]){
			a[k] = L[i];
			i++;
		}
		else{
			a[k] = R[j];
			j++;
		}
	}
	free(L);
	free(R);		
	return 0;
}


void merge_sort(int *a,int p, int r){
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
	for(int i =0; i < n; i++) scanf("%d",&a[i]);
	
	merge_sort(a,0,n-1);
	
	for(int i =0; i < n; i++) printf("%d ",a[i]);
	cout << endl;
	return 0;
}
