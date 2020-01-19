#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t, i, n;
    int sum;
    cin>>t;
    for(i=1; i<=t;i++){
        cin>>n;
        sum = 0;
        while(n--){
            int num;
            cin>>num;
            if(num<0) continue;
            sum+=num;
        }
        cout<<"Case "<<i<<": "<<sum<<endl;
    }

    return 0;
}
