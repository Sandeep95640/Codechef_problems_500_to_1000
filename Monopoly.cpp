#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int p,q,r,s;
	    cin>>p>>q>>r>>s;
	    if(p>(q+r+s) || q>(p+r+s) || r>(p+q+s) || s>(p+q+r)){
	        cout<<"yes"<<endl;
	    }
	    else{
	        cout<<"no"<<endl;
	    }
	}

}
