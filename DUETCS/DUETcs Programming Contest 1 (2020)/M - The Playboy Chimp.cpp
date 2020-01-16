#include<bits/stdc++.h>
using namespace std;
int arr[100001];
int binaryu(int valu, int n)
{
    int hi=n-1, lo=0, mid, last_indx=-1;
    if(arr[0]>valu) return 0;
    while(lo<=hi)
        {
            mid = (lo+hi)/2;
            if(arr[mid]==valu)
            {
                last_indx = mid; //  cout<<"test "<<mid<<endl;
                lo = mid+1;
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

    if(last_indx==-1) return lo;

    return last_indx+1;
}

int binaryl(int valu, int n)
{
    int hi=n-1, lo=0, mid, last_indx=-1;
    if(arr[0]>valu) return 0;
    while(lo<=hi)
        {
            mid = (lo+hi)/2;
            if(arr[mid]==valu)
            {
                last_indx = mid; //  cout<<"test "<<mid<<endl;
                hi = mid-1;
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

    if(last_indx==-1) return lo;

    return last_indx;
}

int main()
{
    int n, q, m, l=0, u, k;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    cin>>q;
    for(int i=0; i<q; i++){
        cin>>m;
        u = binaryu(m, n);
        l = binaryl(m, n);

        if(l==0) cout<<"X ";
        else cout<<arr[l-1]<<" ";

        if(u==n) cout<<"X"<<endl;
        else cout<<arr[u]<<endl;
    }

    return 0;
}
