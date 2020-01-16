/////binary search................
#include<iostream>
using namespace std;

int main()
{
    int lo, hi,num, mid, ara[9]={0,1,2,3,4,5,6,7,8};
    while(1){
        cin>>num;
        lo=0;
        hi=8;
        while(lo<=hi){
            mid = (lo+hi)/2;
            if(ara[mid]==num) break;
            if(num>ara[mid]){
                lo=mid+1;
                continue;
            }
            if(num<ara[mid]){
                hi = mid-1;
            }
        }
        if(lo>hi) cout<<"not"<<endl;
        else cout<<ara[mid]<<endl;
    }


    return 0;
}

int arr[100001];

/////////////////upper bound binary search/////////////////
int binaryu(int valu, int n)
{
    int hi=n-1, lo=0, mid;
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
        return lo;

}


////////////////////Lower bound binary searce 
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
