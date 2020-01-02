#include<stdio.h>
#include<math.h>
 
int main()
{
    int t, Case = 1;
    double pi = 2 * acos(0.0), radius, area;
 
    scanf("%d", &t);
    while(t--){
        scanf("%lf", &radius);
        area = (2.00*radius)*(2.00*radius) - pi * radius * radius;
 
        printf("Case %d: %.2lf\n", Case++, area);
    }
 
    return 0;
}
