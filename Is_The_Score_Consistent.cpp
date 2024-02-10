#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int a,b;
	    cin>>a>>b;
	    int c,d;
	    cin>>c>>d;
	    if((a<=c && b<=d)){
	        cout<<"possible"<<endl;
	    }
	    else{
	        cout<<"impossible"<<endl;
	    }
	}

}
