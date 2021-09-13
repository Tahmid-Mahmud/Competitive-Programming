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
}
