#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int a,b;
	    cin>>a>>b;
	    if(a*10==b*5){
	        cout<<"any"<<endl;
	    }
	    else if(a*10>b*5){
	        cout<<"first"<<endl;
	    }
	    else{
	        cout<<"second"<<endl;
	    }
	}

}
