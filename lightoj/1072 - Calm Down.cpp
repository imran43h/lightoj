#include<bits/stdc++.h>
#define PI acos(-1)
using namespace std;

int main()
{
    int t, i;
    double R, r, n, x;
    cin>>t;
    for(i=1; i<=t; i++){
        cin>>R>>n;
        x=(360/(n*2))*(PI/180);
        r=(R*sin(x))/(1.0+sin(x));
        printf("Case %d: %lf\n",i,r);
    }
    return 0;
}
