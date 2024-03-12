#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n,x,y;
	    cin>>n>>x>>y;
	    int c=y/x;
	    if (y <= n * x && y % x == 0) {
            cout << "YES" << endl;
	    }
	    else{
	        cout<<"no"<<endl;
	    }
	}

}
