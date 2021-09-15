#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	for(int i=1; i<=t; i++){
		int n, m;
		cin>>n>>m;
		vector<int> a;
		for(int j=0; j<n; j++){
			int temp;
			cin>>temp;
			a.push_back(temp);
		}
		
		for(int k=0; k<=m; k++){
			string oper;
			//cin.ignore();
			getline(cin, oper);
//			cout<<"Turn no: "<<k<<endl;
//			cout<<"CMD: "<<oper<<endl;
			if(oper[0]=='S')
			    for(int l=0; l<a.size(); l++){
			    	a[l]+=oper[2]-'0';
			    }
			
			if(oper[0]=='M')
			    for(int l=0; l<a.size(); l++){
			    	a[l]*=oper[2]-'0';
			    }
			    
			if(oper[0]=='D')
			    for(int l=0; l<a.size(); l++){
			    	a[l]/=oper[2]-'0';
			    }
			    
			if(oper[0]=='P')
			    swap(a[oper[2]-'0'], a[oper[4]-'0']);
			    
			if(oper[0]=='R')
			    reverse(a.begin(), a.end());
			
		}
		printf("Case %ld:\n",i);
		for(int q=0; q<a.size(); q++){
		    if(q==0)
			cout<<a[q];
		    else
			cout<<" "<<a[q];
		}
		cout<<endl;
		}
	}
	return 0;
}

/*
This getline helps to take string input with spaces
but the fisrt input will be automatically empty
so try to take 1 more turn to match opeation number 'm'
*/
