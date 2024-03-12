#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n;
	    cin>>n;
	    if(n%4!=0){
	        int s=n/4;
	        cout<<s+1<<endl;
	    }
	    else{
	        int s=n/4;
	        cout<<s<<endl;
	    }
	}

}
