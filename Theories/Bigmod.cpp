#include<iostream>
using namespace std;

using ll = long long;


ll mod=10e9+7;

ll Bigmod(int a,int b){
	if(b==0){
		cout << "O Condition used" << endl;
		return 1;
	}
	else if(b%2==0){
		cout << "Even Condition used" << endl;
		ll x = (Bigmod(a, b/2))%mod;
		ll ans=(x*x)%mod;
		return ans;
	}
	else{
		cout << "Odd Condition used" << endl;
		ll x=a%mod;
		ll y=(Bigmod(a, b-1))%mod;
		ll ans=(x*y)%mod;
		return ans;
	}
	
}


int main(){
	int a, b;
	
	cin >> a >> b;
	cout << (a*Bigmod(3,b))%mod << endl;
	return 0;
}
