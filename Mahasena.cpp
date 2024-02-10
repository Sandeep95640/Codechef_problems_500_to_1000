#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
	    int a;
	    cin>>a;
	    arr[i]=a;
	}
	int count_even=0;
	int count_odd=0;
	for(int i=0;i<n;i++){
	    if(arr[i]%2==0){
	        count_even++;
	    }
	    else{
	        count_odd++;
	    }
	}
	if(count_even>count_odd){
	    cout<<"READY FOR BATTLE"<<endl;
	}
	else {
	    cout<<"NOT READY"<<endl;
	}

}
