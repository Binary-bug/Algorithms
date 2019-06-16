#include<iostream>


using namespace std;


int main(){
	int n,i,x;
	cin >> n >> x;
	int a[12345];
	for(i = 0; i < n; i++) scanf("%d",&a[i]);
	
	int index = -1;
	
	for(i=0; i < n; i++){
		if(a[i] == x){
			index = i;
			break;
		}
	}
	if(index == -1) cout << "Element not found";
	else cout << "element is at " << index + 1 << " position " << endl;
	return 0;
}
	
