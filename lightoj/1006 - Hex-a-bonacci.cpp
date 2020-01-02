#include<bits/stdc++.h>
 
using namespace std;
 
long long ara[10000];
long long int fn( int n ) {
    int x=6;
    for(x=6; x<=n; x++){
        ara[x]=(ara[x-1] + ara[x-2] + ara[x-3] + ara[x-4] + ara[x-5] + ara[x-6] )% 10000007;
    }
    return ara[n];
}
int main() {
    int n, caseno = 0, cases;
    cin>>cases;
    while( cases-- ) {
        cin>>ara[0]>>ara[1]>>ara[2]>>ara[3]>>ara[4]>>ara[5]>>n;
        printf("Case %d: %lld\n", ++caseno, fn(n) % 10000007);
    }
    return 0;
}
