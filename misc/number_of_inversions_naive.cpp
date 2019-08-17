// This algo is simple bruteforce with polynomial complexity.

#include<iostream>
using namespace std;

int Invcount(int *a,int n){
	int inv = 0;
	for(int i =0; i < n-1; i++){
		for(int j = i+1; j < n; j++){
			if(a[i] > a[j]) inv++;
		}
	}
	return inv;
}


int main(){
	int a[] = {3,2,1};
	int n = sizeof(a)/sizeof(a[0]);
	cout << "number of inversions are " << Invcount(a,n);
	return 0;
}
