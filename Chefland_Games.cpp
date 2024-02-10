#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    if((a==0 && b==0 && c==0 && d==0)){
	        cout<<"IN"<<endl;
	    }
	    else if(a==1  && b==1 && c==1 && d==1){
	        cout<<"OUT"<<endl;
	    }
	    else{
	        cout<<"OUT"<<endl;
	    }
	}
}
