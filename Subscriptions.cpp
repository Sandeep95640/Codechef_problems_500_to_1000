#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n,x;
	    cin>>n>>x;
	    if(n<=6){
	        cout<<x<<endl;
	    }
	    else{
	       if(n%6!=0){
	           cout<<(n/6+1)*x<<endl;
	       }
	       else{
	           cout<<n/6*x<<endl;
	       }
	    }
	}
}
