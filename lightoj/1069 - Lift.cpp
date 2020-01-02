#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, i, n, m;
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>n>>m;
        if(n>=m){
            cout<<"Case "<<i<<": "<<(n-m)*4+3+5+3+n*4+3+5<<endl;
        }
        else
            cout<<"Case "<<i<<": "<<(m-n)*4+3+5+3+n*4+3+5<<endl;
    }
 
 
    return 0;
}
