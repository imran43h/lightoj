#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, t, d, ans;
//    while(1){
        cin>>a>>b>>c;
    t = a * c;
    d = b * c;
//    double m =(t-d)/(b*1.0);
//    cout<<m<<endl;
    ans = ceil((t-d)/(b*1.0));
    cout<<ans<<endl;
//    }

    return 0;
}
