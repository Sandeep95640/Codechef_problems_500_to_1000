#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    int max,min;
	    if(a>=b){
	        max=a;
	    }
	    else{
	        max=b;
	    }
	    if(c>=d){
	        min=c;
	    }
	    else{
	        min=d;
	    }
	    cout<<max+min<<endl;
	}

}
