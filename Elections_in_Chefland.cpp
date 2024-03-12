#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n,x;
	    cin>>n>>x;
	    int count=0;
	    for(int i=0;i<n;i++){
	        int a;
	        cin>>a;
	        if(a>=x){
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}

}
