#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t, i, x1, x2, y1, y2, x, y, m;
    cin>>t;
    for(i=1; i<=t; i++){
        cin>>x1>>y1>>x2>>y2>>m;
        cout<<"Case "<<i<<":"<<endl;
        while(m--){
            cin>>x>>y;
            if(x1<=x && x2>=x && y1<=y && y2>=y)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
    }
 
    return 0;
}
