#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n,x;
	    cin>>n>>x;
	    int c=n/2;
	    if(n==x){
	        cout<<0<<endl;
	    }
	    else if(c>=x ){
	        cout<<x<<endl;
	    }
	    else if(x>c){
	        cout<<n-x<<endl;
	    }
	    
	}

}
