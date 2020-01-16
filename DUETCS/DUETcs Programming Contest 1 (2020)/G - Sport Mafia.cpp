#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, eat, i, s=0;
    cin>>n>>k;
    for(i=1; i<=n; i++){
        s+=i;
        eat = s - k;
        if(eat+i==n){
            cout<<eat<<endl;
            return 0;
        }
    }

    return 0;
}
