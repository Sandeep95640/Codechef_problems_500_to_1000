#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int x,y;
	    cin>>x>>y;
	    if(y>=x){
	        cout<<(y-x)<<endl;
	    }
	    else if(x>=y){
	        cout<<x-y<<endl;
	    }
	}

}
