#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    for (int i=0;i<t;i++) {
        int x,y;
        cin>>x>>y;
        double s=y/2.0;
        if(((y*100)/x)>=50){ 
            cout<<"yes"<<endl;
        } else {
            cout<<"no"<<endl;
        }
    }
    return 0;
}
