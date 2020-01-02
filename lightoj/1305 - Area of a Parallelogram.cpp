#include <bits/stdc++.h>
using namespace std;
int main()
{
        int i,T,Dx,Dy,Ax,Ay,Bx,By,Cx,Cy,height,base;
        int area;
 
        scanf("%d",&T);
        for(i  =0 ;i<T; i++)
        {
                scanf("%d%d%d%d%d%d",&Ax,&Ay,&Bx,&By,&Cx,&Cy);
                Dx = Ax+Cx-Bx;
                Dy = Ay-By+Cy;
                height = Cy-By;
                base = Bx-Ax;
                area = ((Ax*By)+(Bx*Cy)+(Cx*Dy)+(Dx*Ay))-((Ay*Bx)+(By*Cx)+(Cy*Dx)+(Dy*Ax));
 
                printf("Case %d: %d %d %d\n",i+1,Dx,Dy,abs(area/2));
        }
 
        return 0;
}
