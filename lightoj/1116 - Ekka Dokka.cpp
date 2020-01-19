#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t, i, c;
    long long w, r, n, m, j;
    cin>>t;
    for(i=1; i<=t; i++){
        cin>>w;
        c=0;
        if(w&1)
            cout<<"Case "<<i<<": Impossible"<<endl;
        else{
            for(j=2; j<=w/2;j+=2){
                if(w%j==0 && ((w/j)&1)){
                    cout<<"Case "<<i<<": "<<w/j<<" "<<j<<endl;
                    c=1;
                    break;
                }
            }
        }
    }

    return 0;
}
