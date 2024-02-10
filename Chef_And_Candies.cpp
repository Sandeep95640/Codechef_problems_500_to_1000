#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n,x;
	    cin>>n>>x;
	    if(x>=n){
	        cout<<0<<endl;
	    }
	    else{
	        int rest=n-x;
	        if(rest%4!=0){
	            cout<<(rest/4)+1<<endl;
	        }
	        else{
	            cout<<rest/4<<endl;
	        }
	    }
	    
	}

}
