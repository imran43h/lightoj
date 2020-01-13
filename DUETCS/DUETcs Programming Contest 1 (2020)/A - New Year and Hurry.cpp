#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, i=1, t;
    cin>>n>>k;
    t = 240-k;
//    while(t){
        while((t-5*i)>=0&&i<=n){
            t -= 5*i;
            i++;
        }
//    }
    cout<<--i;

    return 0;
}
