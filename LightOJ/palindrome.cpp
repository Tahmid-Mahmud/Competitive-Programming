#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int t;
	cin>>t;
	
	for(int i=1; i<=t; i++){
    	string palindrom, repl;
    	cin>>palindrom;
    	repl=palindrom;
    	
    	reverse(palindrom.begin(), palindrom.end());
    	if (repl==palindrom){
			printf("Case %d: Yes\n", i);
		}else{
			printf("Case %d: No\n", i);
		}
	}
	
	return 0;
}
