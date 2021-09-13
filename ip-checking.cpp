#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

string bin(int num, string binary){
	int q=num/2;
	int rim=num%2;
	
	if (q==0){
		binary+=to_string(rim);
		return binary;
	}
	
	else{
		binary+=to_string(rim);
		binary+=bin(q, "");
		//cout<<binary<<endl;
		return binary;
	}
}



int main(){
	int t;
	cin>>t;
	for(int i=1; i<=t; i++){
		string ip, gip, binip="";
		cin>>ip;
		cin>>gip;
		vector<string> abcd;
		string a;
		for(char i:ip){
			if(i=='.'){
				abcd.push_back(a);
				a="";
			}else{
				a+=i;
			}
		}
		
		abcd.push_back(a);
		for(string k:abcd){
			int t=stoi(k);
			string ult=bin(t, "");
			reverse(ult.begin(), ult.end());
			if(ult.size()<8){
				ult=string(8-ult.size(),'0')+ult;
			}
			binip+=ult+".";
		}
		
		binip=binip.substr(0, binip.size()-1);
		
		if(gip==binip){
			printf("Case %d: Yes\n", i);
		}else{
			printf("Case %d: No\n", i);
		}
//		cout<<binip<<endl;
		
	}
}

/*
2
192.168.0.100
11000000.10101000.00000000.11001000
65.254.63.122
01000001.11111110.00111111.01111010
*/