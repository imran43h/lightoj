#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, t, i, e;
    cin>>t;
    for(i=1; i<=t; i++){
        cin>>n;
        e=0;
        while(n){
            if(n%2==1) e++;
            n/=2;
        }
        if(e&1) cout<<"Case "<<i<<": odd"<<endl;
        else cout<<"Case "<<i<<": even"<<endl;
    }

    return 0;
}
