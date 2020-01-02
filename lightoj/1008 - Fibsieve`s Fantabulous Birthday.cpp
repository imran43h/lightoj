#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t, i;
    cin>>t;
    for(i=1;i<=t;i++){
        long long int n,r;
        cin>>n;
        r=ceil(sqrt(n));
        if(r&1){
            if(r*r-n+1<=r)
                cout<<"Case "<<i<<": "<<r*r-n+1<<" "<<r<<endl;
            else
                cout<<"Case "<<i<<": "<<r<<" "<<n-(r-1)*(r-1)<<endl;
        }
        else
            if(r*r-n+1<=r)
                cout<<"Case "<<i<<": "<<r<<" "<<r*r-n+1<<endl;
            else
                cout<<"Case "<<i<<": "<<n-(r-1)*(r-1)<<" "<<r<<endl;
    }
 
    return 0;
}
