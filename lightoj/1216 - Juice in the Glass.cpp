#include<bits/stdc++.h>
#define PI 2*acos(0.0)
using namespace std;
 
int main()
{
    int r1, r2, h, p,t,i;
    double k, A, B, r,v;
    cin>>t;
 
    for(i=1; i<=t; i++){
        cin>>r1>>r2>>h>>p;
        k = (h*h)+(r1-r2)*(r1-r2)*1.0;
        A=acos((k+h*h-(r1-r2)*(r1-r2))/(2*sqrt(k)*h));
        B=(PI/2)-A;
        r=((p*sin(A))/sin(B))+r2;
        v=((PI*p)/3)*(r*r+r*r2+r2*r2);
        printf("Case %d: %.9lf\n",i,v);
    }
 
    return 0;
}
