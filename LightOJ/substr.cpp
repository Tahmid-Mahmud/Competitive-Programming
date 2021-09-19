#include<bits/stdc++.h>
using namespace std;


int check(string x, string y){
    int time=0;
    for(int i=0; i<=x.size()-y.size(); i++){
        string b=x.substr(i, y.size());
        if(b==y){
            // cout<<b<<" matched"<<endl;
            time+=1;
        }
    }
    
    return time;
}
int main(){
    int t;
    cin>>t;
    for(int i=1; i<=t; i++){
        string a, b;
        cin>>a;
        cin>>b;
        int times=check(a, b);
        printf("Case %d: %d\n", i, times);
        // cout<<times<<endl;
    }
    return 0;
}
