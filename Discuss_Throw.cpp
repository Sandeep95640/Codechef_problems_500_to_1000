#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(a>=b && a>=c){
	        cout<<a<<endl;
	    }
	    else if(b>=c && b>=a){
	        cout<<b<<endl;
	    }
	    else if(c>=a && c>=b){
	        cout<<c<<endl;
	    }
	}

}
