#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, t, i, ca, cb;
    cin>>t;
    for(i=1; i<=t;i++){
        cin>>a>>b;
        if((a-1)%3!=0){
            if(a%3==0){
                ca=(a/3);
                ca=(ca*2)-1;
            }
            else {
                ca = a/3;
                ca*=2;
            }
        }
        else {
            ca = a/3;
            ca*=2;
        }
        if((b-1)%3!=0){
            if(b%3==0){
                cb=(b/3);
                cb=(cb*2);
            }
            else {
                cb = b/3;
                cb=(cb*2)+1;
            }
        }
        else {
            cb = b/3;
            cb*=2;
        }

        cout<<"Case "<<i<<": "<<cb-ca<<endl;
    }
    return 0;
}
