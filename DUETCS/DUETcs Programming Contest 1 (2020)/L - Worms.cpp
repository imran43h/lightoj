#include<bits/stdc++.h>
using namespace std;

int a[1000001];

int main()
{
    int d, k, c, j=1, q, i=0;
    cin>>d;
    while(d--){
        cin>>k;
        while(k--){
            a[i] = j;
            i++;
        }
        j++;
    }
    cin>>c;
    while(c--){
        cin>>q;
        cout<<a[q-1]<<endl;
    }

    return 0;
}
