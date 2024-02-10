#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int x,a,b;
	    cin>>x>>a>>b;
	    if((a+b*2)>=x){
	        cout<<"qualify"<<endl;
	    }
	    else{
	        cout<<"notqualify"<<endl;
	    }
	}

}
