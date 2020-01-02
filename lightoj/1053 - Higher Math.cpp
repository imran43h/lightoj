#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int a[3],t,i;
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        if(a[0]*a[0]+a[1]*a[1]==a[2]*a[2]){
            cout<<"Case "<<i<<": "<<"yes"<<endl;
        }
        else
            cout<<"Case "<<i<<": "<<"no"<<endl;
    }
 
    return 0;
}
