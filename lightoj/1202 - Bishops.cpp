#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n=1, d=2, i, r1, r2, c1, c2;
    cin>>t;
    for(i=1; i<=t; i++){
        cin>>r1>>c1>>r2>>c2;
        printf("Case %d: ",i);
        int r = abs(r2-r1);
        int c = abs(c2-c1);
        if(r==c) printf("1\n");
        else if(r%2==c%2) printf("2\n");
        else printf("impossible\n");
    }

    return 0;
}
