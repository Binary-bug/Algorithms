#include <iostream>
using namespace std;

int n,a[100001],b[100001];

void writeAnswer(int ii,int jj){
	cout<<a[ii]<<" "<<b[jj]<<endl;
}
int X;
int main(){
	cin>>n>>X;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
	int i=0,j=n-1;
	while (i < n)
		{
			 while(a[i] + b[j] > X && j > 0) j--;
		 if (a[i] + b[j] == X) writeAnswer(i, j);
				 i++;
		}

	while(1); //pause
}
