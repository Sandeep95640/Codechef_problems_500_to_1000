#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n,m;
	    cin>>n>>m;
	    if(m==0){
	        cout<<n*2<<endl;
	    }
	    else if(m>=n){
	        cout<<n<<endl;
	    }
	    else if(m<n){
	        cout<<(n-m)+n<<endl;
	    }
	}

}`
