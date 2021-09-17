#include<iostream>
#include<deque>

using namespace std;

int main(){
	int t;
	cin>>t;
	for(int i=0; i<t; i++){
		deque<int> a;
		int n, m;
		cin>>n>>m;
		printf("Case %d:", i);
		for(int j=0; j<m; j++){
			string cmd, cmd2;
			int num;
			cin>>cmd;
			
			if(cmd == "pushLeft" || cmd == "pushRight"){
				cin>>num;
			}
			
			
			
			if(cmd=="pushLeft" || cmd=="pushRight"){
				string suff=cmd.substr(4, cmd.size()-4);
				//cout<<suff<<endl;
				if(a.size()<n){
					if(suff=="Left"){
						cout<<"Pushed in "<<suff<<": "<<num<<endl;
						a.push_front(num);
					}
					else{
						cout<<"Pushed in "<<suff<<": "<<num<<endl;
						a.push_back(num);
					}
				}
				else{
					printf("The queue is full\n");
				}
			}
			
			if(cmd=="popLeft" || cmd=="popRight"){
				string suff=cmd.substr(3, cmd.size()-3);
				if(a.size()>0){
					if(suff=="Left"){
						cout<<"Popped from "<<suff<<": "<<a[0]<<endl;
						a.pop_front();
					}
					else{
						cout<<"Popped from "<<suff<<": "<<a[a.size()-1]<<endl;
						a.pop_back();
					}
				}
				else{
					printf("The queue is empty\n");
				}
			}
			
		}
		
	}
	
	
	return 0;
}

/*1
3 8
pushLeft 1
pushLeft 2
pushRight -1
pushRight 1
popLeft
popRight
popLeft
popRight*/