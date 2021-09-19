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
		
		for(int k=0; k<m; k++){
			char oper;
			cin>>oper;
//			cin.ignore();
//			getline(cin, oper);
//			cout<<"Turn no: "<<k<<endl;
//			cout<<"CMD: "<<oper<<endl;
			if(oper=='S'){
				int D;
				cin>>D;
			    for(int l=0; l<a.size(); l++){
			    	a[l]+=D;
			    }
			}
			
			if(oper=='M'){
				int D;
				cin>>D;
			    for(int l=0; l<a.size(); l++){
			    	a[l]*=D;
			    }
			}

			if(oper=='D'){
				int K;
				cin>>K;
			    for(int l=0; l<a.size(); l++){
			    	a[l]/=K;
			    }
			}

			if(oper=='P'){
				int w, f;
				cin>>w>>f;
			    swap(a[w], a[f]);
			}
			    
			if(oper=='R'){
			    reverse(a.begin(), a.end());
			}

		}
		printf("Case %d:\n",i);
        for(int q=0; q<a.size(); q++){
            if(q==0)
                cout<<a[q];
            else
                cout<<" "<<a[q];
        }
        cout<<endl;
	}
	return 0;
}

/*
This getline helps to take string input with spaces
but the fisrt input will be automatically empty
so try to take 1 more turn to match opeation number 'm'
*/
