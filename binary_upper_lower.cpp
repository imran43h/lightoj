int arr[100001];

/////////////////upper/////////////////
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
