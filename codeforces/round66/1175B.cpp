#include<iostream>
#include<stack>
#include<string>

using namespace std;


const long long int X = (1LL << 32);

int main(){
	long long int n,x,res=0,val=0;
	cin >> n;
	stack<long long int> stk;
	string s;
	stk.push(1);
	while(n--){
	cin >> s;
	if(s == "add") res += stk.top();
	else if(s == "for"){
		cin >> x;
		stk.push(min(x*stk.top(),X));
	}
	else stk.pop();
	}
	if(res >= X) cout << "OVERFLOW!!!";
	else cout << res;
	cout << endl;
	return 0;
}
		
	
		
