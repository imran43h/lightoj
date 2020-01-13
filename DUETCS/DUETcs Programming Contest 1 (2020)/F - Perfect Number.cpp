#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long k, n=19, i, s=0, c=0,l=0;
    cin>>k;
    while(c<=k){
        i=n;
        s=0;
        while(i){
            s+=i%10;
            if(s>10) break;
            i/=10;
//            cout<<n<<endl;
//            if(n>30) return 0;
        }
        if(s==10) c++;
        if(c==k){
            cout<<n<<endl;
            break;
        }
        n++;
    }
    return 0;
}
