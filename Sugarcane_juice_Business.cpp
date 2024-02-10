#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n;
	    cin>>n;
	    int salary=n*50;
	    int buy_sgc=(20*salary)/100;
	    int buy_salt=(20*salary)/100;
	    int rent=(30*salary)/100;
	    int profit=salary - buy_sgc - buy_salt - rent;
	    cout<<profit<<endl;
	    
	}

}
