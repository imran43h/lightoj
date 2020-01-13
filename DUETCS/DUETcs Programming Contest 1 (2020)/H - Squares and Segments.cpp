#include<bits/stdc++.h>
using namespace std;

int main()
{
//    while(1){
        int n, f, c;
        double r;
    cin>>n;
    if(n==1){
        cout<<2<<endl;
        return 0;
    }
    r = sqrt(n);
    c = ceil(r);
    f = floor(r);
    if((c*c-c)<n) cout<<c*2<<endl;
    else cout<<c*2-1<<endl;
//}
    return 0;
}
