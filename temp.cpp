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
//         Palindrome          //
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
//         Higher  Math        //
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int t;
    vector<int> sides;
    cin>>t;
    
    for(int i=1; i<=t; i++){
    	int a, b, c;
    	cin>>a>>b>>c;
    	
    	sides.push_back(a);
		sides.push_back(b);
		sides.push_back(c);
		sort(sides.begin(), sides.end());
		
		int rhs=sides[0]*sides[0]+sides[1]*sides[1];
		if ((sides[2]*sides[2])==rhs){
			printf("Case %d: yes\n", i);
		}else{
			printf("Case %d: no\n", i);
		}
		sides.clear();
    }
}     */