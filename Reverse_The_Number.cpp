#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n;
	    cin>>n;
	    int rev=0;
	    while(n!=0){
	        rev=rev*10 +n%10;
	        n=n/10;
	    }
	    cout<<rev<<endl;
	}

}
