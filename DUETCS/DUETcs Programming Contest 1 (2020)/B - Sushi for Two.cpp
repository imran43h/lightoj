#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, t1, one=0, two=0, max=0, min=0, t=0, o=0;
    cin>>n;
    while(n--){
        cin>>t1;
        if(t1&1){
            if(!o){
                o = 1;
                min = (one>two)? two:one;
                max = (max>min)?max:min;
                one = 0;
                t = 0;
            }
            one++;
            if(!n){
                min = (one>two)? two:one;
                max = (max>min)?max:min;
            }
        }
        else{
            if(!t){
                t = 1;
                min = (one>two)? two:one;
                max = (max>min)?max:min;
                two = 0;
                o = 0;
            }
            two++;
            if(!n){
                min = (one>two)? two:one;
                max = (max>min)?max:min;
            }
        }
    }
    cout<<max*2<<endl;
    return 0;
}
