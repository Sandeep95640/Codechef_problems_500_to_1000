#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int x,y,z;
	    cin>>x>>y>>z;
	    if((x==1 && y==1 && z==1) || (x==1 && y==1 && z==0) || (x==0 && y==1 && z==1) ||(x==1 && y==0 && z==1)  ){
	        cout<<"NOT NOW"<<endl;
	    }
	    else{
	        cout<<"WATER FILLING TIME"<<endl;
	    }
	}

}
