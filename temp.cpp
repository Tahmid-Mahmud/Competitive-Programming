#include<iostream>
#include<algorithm>

using namespace std;
using ll = long long;
int main(){
	int t;
	cin>>t;
	
	for(int i=1; i<=t; i++){
		string a, b;
		cin>>a>>b;
		string rim="";
		
		if(b[0]=="-"){
			b[0]=="";
		}
		
		if(a[0]=="-"){
			a[0]=="";
		}
		
		for(int j; j<=a.size(); j++){
			int r=int(a[j])%int(b[j]);
			if(r==0){
				rim="";
			}else{
				rim+=string(r);
			}
		}
		
	}
}
/*

//         Higher  Math        //
     */
