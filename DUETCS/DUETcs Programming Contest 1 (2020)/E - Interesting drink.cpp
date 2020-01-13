#include<bits/stdc++.h>
using namespace std;
int arr[100001];
int binary(int valu, int n)
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
//    int low = lo;
//    if(last_indx==-1)
//        for(;lo<=hi;lo++)
//            if(arr[lo]==valu)
//                return lo+1;

    if(last_indx==-1){
//        for(;arr[low]<valu && low<=hi;low++){
//
//        }
        return lo;
    }

    return last_indx+1;

//    while(lo<=hi){
//        mid = (lo+hi)/2;
//        if(a[mid]==m) return mid-1;
//        if(a[mid] < m) lo = mid + 1;
//        else if(a[mid] > m) hi = mid - 1;
//    }
}

int main()
{
    int n, q, m, c,k;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    cin>>q;
    for(int i=0; i<q; i++){
        cin>>m;
        c = binary(m, n);
        cout<<c<<endl;
    }

    return 0;
}
