#include<stdio.h>
 
int main()
{
    int t, i = 1, a, b;
    scanf("%d", &t);
    while(t--){
        scanf("%d %d", &a, &b);
        printf("Case %d: %d\n", i,a+b);
        i++;
    }
    return 0;
}
