#include<bits/stdc++.h>
using namespace std;

long long arr[200001];

int binary(long long valu, long long n)
{
    long long hi=n-1, lo=0, mid;
    if(arr[0]>valu) return 0;
    while(lo<=hi)
        {
            mid = (lo+hi)/2;
            if(arr[mid]==valu)
            {
                return mid;
            }
            else if(arr[mid] < valu)
            {
                lo = mid+1;
            }
            else
            {
                hi = mid-1;
            }
        }

    return lo;

}

int main()
{
    long long n, m, a, b, sh, sl, i, dn, rn;
    cin>>n>>m;
    cin>>arr[0];
    for(i=1; i<n; i++){
        cin>>a;
        arr[i]=arr[i-1]+a;
    }
    for(i=1; i<=m; i++){
        cin>>b;
        dn = binary(b, n);
//        if(dn==0) rn = b-arr[dn];
        rn = b-arr[dn-1];
        if(dn==0){
            cout<<dn+1<<" "<<b<<endl;
        }
        else cout<<dn+1<<" "<<rn<<endl;
    }

    return 0;
}
