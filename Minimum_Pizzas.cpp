#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,x;
        cin>>n>>x;
        if(((n*x)%4)!=0){
            int s=(n*x)/4;
            cout<<s+1<<endl;
        }
        else{
            int s2=(n*x)/4;
            cout<<s2<<endl;
        }
    }

}
