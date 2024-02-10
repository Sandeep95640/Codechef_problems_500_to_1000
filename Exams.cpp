#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int x,y,z;
	    cin>>x>>y>>z;
	    int total_st=x*y;
	    int stu_50_per=0.5*total_st;
	    if(z>stu_50_per){
	        cout<<"yes"<<endl;
	    }
	    else{
	        cout<<"no"<<endl;
	    }
	}

}
