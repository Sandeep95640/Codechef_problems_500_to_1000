#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n;
	    cin>>n;
	    if(n>=26 && n<=30){
	        cout<<"upper single"<<endl;
	    }
	    else if(n>=16 && n<=25){
	        cout<<"upper double"<<endl;
	    }
	    else if(n>=11 && n<=15){
	        cout<<"lower single"<<endl;
	    }
	    else if(n>=1 && n<=10){
	        cout<<"lower double"<<endl;
	    }
	}

}
