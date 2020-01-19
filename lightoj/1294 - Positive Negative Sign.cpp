#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t, i, j, n, m, num;
    long long sum;
    cin>>t;
    for(i = 1; i <= t; i++){
        cin>>n>>m;
        sum = 0;
//        num = 1;
//        for(j = 1; j <= n/(2*m); j++){
//            sum =sum + ((m*(num+m + num+m + m-1))/2) - ((m*(num + num + m-1))/2);
//            num += (2*m);
//
//        }
        sum = (n*m)/2;
        cout<<"Case "<<i<<": "<<sum<<endl;
    }

    return 0;
}
