#include<bits/stdc++.h>

using namespace std;

int main()
{
    int ax, ay, bx, by, cx, cy, dx, dy, t, i, a, b, c1, c2;
    double v, h, area;
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>ax>>ay>>bx>>by>>cx>>cy;
        dx = ax + cx - bx;
        dy = ay + cy - by;
        a = ay - by;
        b = -(ax - bx);
        c1 = -ax*(ay-by) - (-ay*(ax-bx));
        c2 = -dx*(dy-cy) - (-dy*(dx-cx));
        h = (c1-c2)/sqrt(a*a+b*b*1.0);
        v = sqrt((ax-bx)*(ax-bx)+(ay-by)*(ay-by));
        area = a * h;
        cout<<"Case "<<i<<": "<<dx<<" "<<dy<<" "<<area<<endl;
    }

    return 0;
}
